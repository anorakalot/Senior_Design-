#include <Wire.h>
#include <LSM6.h>
#include <math.h>    // (no semicolon)  
#include "global_values.h"
#include "motor_func.h"
#include "misc_functions.h"
#define pi 3.141592653589793238462643383279



LSM6 imu;

void serial_input_test() {
  ////testing input
  //Serial.println("apples");
  if (Serial.available() > 0) {
    char_input_from_serial = Serial.read();
    if (char_input_from_serial == '1') {
      //if (input_from_serial == 103){
      forward();
    }
    else {
      halt();
    }
  }
}


//should put in if negative going backwards
void left_encoder_update() {
  encoder_count_left += 1;
  if (encoder_count_left > 200000000) {
    encoder_count_left = 0;
  }
  curr_enc_count_l = encoder_count_left;
}


void right_encoder_update() {
  encoder_count_right += 1;
  if (encoder_count_right > 200000000) {
    encoder_count_right = 0;
  }

  curr_enc_count_r = encoder_count_right;

}


void setup() {
  left_pwm = 100;
  right_pwm = 100;

  //l r setpoint 0.70 and 0.67 goes to the right
  //l r setpoint 0.70 and 0.68 goes to the right
  //l r setpoint 0.70 and 0.69 goes to the right

  // l r setpoint 0.70 and 0.70 goes pretty straightt
  l_speed.set_setpoint(0.70);//0.65
  r_speed.set_setpoint(0.70);

//  Serial.print("l setpoint");
//  Serial.println(l_speed.set_point);
//  Serial.print("r setpoint");
//  Serial.println(r_speed.set_point);
//  
  
  //set up controller enc
  //  left_speed.set_kp(1);
  //  left_speed.set_kd(1);
  //  left_speed.set_setpoint(600);
  //
  //  right_speed.set_kp(1);
  //  right_speed.set_kd(1);
  //  right_speed.set_setpoint(550);//430

  // put your setup code here, to run once:

  Serial.begin(9600);

  // encoder_count_left_1 = 0;
  pinMode(motor_driver_output_1_1, OUTPUT);

  pinMode(motor_driver_output_1_2, OUTPUT);

  pinMode(motor_driver_output_2_1, OUTPUT);

  pinMode(motor_driver_output_2_2, OUTPUT);

  pinMode(motor_1_enable, OUTPUT);
  pinMode(motor_2_enable, OUTPUT);
  digitalWrite(motor_1_enable, HIGH);
  digitalWrite(motor_2_enable, HIGH);

  attachInterrupt(digitalPinToInterrupt(motor_1_enc_a), left_encoder_update, CHANGE);
  //attachInterrupt(digitalPinToInterrupt(motor_1_enc_b),left_encoder_update,CHANGE);

  attachInterrupt(digitalPinToInterrupt(motor_2_enc_a), right_encoder_update, CHANGE);
  //attachInterrupt(digitalPinToInterrupt(motor_2_enc_b),right_encoder_update,CHANGE);

  Wire.begin();
  while (!imu.init()) {
    Serial.println("IMU INIT FAILED");
    //while (1);
    delay(1000);
  }
  //imu.init();
  imu.enableDefault();



  //  for (int i = 0; i < 3; i++){
  //    digitalWrite(led_pin,HIGH);
  //    delay(1000);
  //    digitalWrite(led_pin,LOW);
  //    delay(1000);
  //  }
  //  Serial.println("STARTING MOTOR TEST");

  delay(4000);
}//end of setup








void update_gyro() {


  curr_time_imu = millis();
  if ((curr_time_imu - reset_time_imu ) > reset_imu_interval) {
    gyro_angle_z = 0;
    reset_time_imu = curr_time_imu;
  }

  if ((curr_time_imu - prev_time_imu) > imu_interval) {

    imu.read();
    gyro_raw_data_z = imu.g.z;
    gyro_angle_z += ((gyro_raw_data_z / 100));//100 works 
    Serial.println(gyro_angle_z);



    prev_time_imu = curr_time_imu;
  }
}

void left_turn_w_gyro() {
  gyro_angle_z = 0;
  halt();
  delay(1000);
  while (gyro_angle_z < 8000) { //100 too small,1000,3000,6000,6500,6700,6900,7200(close),7500(30,7800(close),7900,8000(really close)
    left_turn();
    update_gyro();
  }
  halt();
  delay(1000);
  gyro_angle_z = 0;
}


void right_turn_w_gyro() {
  gyro_angle_z = 0;
  halt();
  delay(1000);
  while (gyro_angle_z > -8000) {
    right_turn();
    update_gyro();
  }
  halt();
  delay(1000);
}


//int drift_comp_value = 1;
//time to get data might be causing pid oscillations
bool update_gyro_forward() {


  curr_time_imu_forward = millis();
//  if ((curr_time_imu_forward - reset_time_imu_forward ) > reset_imu_interval_forward) {
//    gyro_angle_z_forward = 0;
//    reset_time_imu_forward = curr_time_imu_forward;
//  }
  if ((curr_time_imu_forward - prev_time_imu_forward) > imu_interval_forward) {
     
    imu_counter_forward += 1;
    imu.read();
    gyro_raw_data_z_forward = imu.g.z;
    gyro_data_calc_z_forward = (gyro_raw_data_z_forward / 100);// /100, /50 (for 5 imu interval
    //low pass filter 
    if (gyro_data_calc_z_forward <=  5 && gyro_data_calc_z_forward >= -5){//2,5 (DOESN"T CHANGE WHEN STILL), 4(doesn't change when still),3
      //nothing //try 10 
    }
    else{
    gyro_angle_z_forward += (gyro_data_calc_z_forward);      
    }
    
    //gyro_angle_z_forward += 1;//too fast
//    if (imu_counter_forward %3  == 0){//5,4,3
//      gyro_angle_z_forward += 1;  
//    }
    //gyro_angle_z += drift_comp_value;
    Serial.println(gyro_angle_z_forward);



    prev_time_imu_forward = curr_time_imu_forward;
    return 1;//can go and do pid 
  }
  return 0;//don't do pid
}


void gyro_pid () {

  gyro_pid_bool = update_gyro_forward();
  if(gyro_pid_bool == 1){
     p_d_error_val = l_r_speed_imu.update_robot(gyro_angle_z_forward);
  p_d_error_val_abs = abs(p_d_error_val);
  
  if (p_d_error_val < 0) {
    left_pwm += p_d_error_val_abs;
    right_pwm -= p_d_error_val_abs;
  }
  else if (p_d_error_val > 0) {
    left_pwm -= p_d_error_val_abs;
    right_pwm += p_d_error_val_abs;
  }
    //make sure pwm values are in range for analogwrite
  if(right_pwm < 0){
    right_pwm = 0;
  }
  else if (right_pwm > 255){
    right_pwm = 255;
  }
  if(left_pwm < 0){
    left_pwm = 0;
  }
  else if (left_pwm > 255){
    left_pwm = 255;
  }
  
  forward_w_speed(left_pwm,right_pwm);
  }
  else{
    //nothing
  }
 

}

//void pid_l_r() {
//
//}

char cell_print[100];

void loop() {
//  //use tthis to test pid going straight
encoder_pid();

//  noInterrupts();
//  go_one_cell_curr = curr_enc_count_l;
//  interrupts();
//  
//  snprintf(cell_print,sizeof(cell_print),"go_one_cell_curr : %lu,go_one_cell_prev: %lu",go_one_cell_curr, go_one_cell_prev);
//  Serial.println(cell_print);
//  Serial.println(":)");
//
//  if ((go_one_cell_curr - go_one_cell_prev) > go_one_cell_length){//go_one_cell_length needs to be bigger 
//    go_one_cell_prev = go_one_cell_curr;
//    //gyro_angle_z_forward = 150;//1000(goes to the right),750,100000000(goes to the right);,750,600(goes to right),500(goes to right),250
//    gyro_angle_z_forward = 0;
//    //noInterrupts();
////    halt();
////    delay(1000);
//    Serial.println("after delay");
//    //interrupts();
//    halt();
//    delay(1000);
//////    left_turn();
//////    delay(1000);
//////
////    left_turn_w_gyro();
////    halt();
////    delay(1000);
//  }
//    
//  gyro_pid();






  //update_gyro_forward();
//
//forward();//works with forward
//delay(1000);
//halt();
//delay(1000);

//  forward_w_speed(100,100);//not working w/ forward w speed()
//  delay(1000);
  
  //delay(1000);
//  Serial.println(curr_enc_count_l);

  
  
  
  //testing turning
  //left_turn_w_gyro();
  //right_turn_w_gyro();

  //
  //forward_w_speed(50,255);
  //forward();
  ////gyro_pid way
  //update_gyro_forward();
  //update_gyro();
  ////gyro_pid();
  ////forward_w_speed(left_pwm,right_pwm);


  //  forward_w_speed(50,100);

}//end of loop

////TESTING TURNING VOID LOOP
//void loop(){
//  left_turn_w_gyro();
//}


//
//halt();
//delay(1000);
//TESTING ENCODER PID



//Serial.println("APPLES");
// put your main code here, to run repeatedly:
//forward();
//forward_w_speed(100,60);

//  left_turn();
//  delay(2000);
//  //halt();
//  right_turn();
//  delay(2000);
//
//  halt();
//  delay(2000);

//
//  forward();
//  delay(1000);
//  halt();
//  delay(1000);
//
//
//
//  snprintf(encoder_print,sizeof(encoder_print), "encoder_count_left %lu , encoder_count_right %lu \n",
//  encoder_count_left,encoder_count_right);
//  Serial.println(encoder_print);
//  delay (2000);

//  for (int x = 0; x < 100; x++){
//
//
//  imu.read();
//  Serial.print("imu.g.z: ");
//
//  Serial.println(imu.g.z);
//
//  //getting raw data gyro
//  //and then converting it to angle by taking sum integral * the time rate which is 0.01 s
//  //or 10 ms/ 100 hz for the timing
//  gyro_raw_data_z = imu.g.z;
//  gyro_angle_z += (gyro_raw_data_z * angle_time_rate);
//  Serial.println(gyro_angle_z);
//
//
//  accel_raw_data_z = imu.a.z;
//  //complementary filter to handle drift
//
//  accel_data = atan2(accel_raw_data_z);
//  Serial.println(accel_data);
//
//  angle = 0.98*(gyro_angle_z) + 0.02*(accel_data);
//  Serial.println(angle);
//  Serial.println("\n");
//

//}
//delay(1000);
//}