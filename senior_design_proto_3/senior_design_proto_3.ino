#include <Wire.h>
#include <LSM6.h>
#include <math.h>    // (no semicolon)
#include "global_values.h"
#include "motor_func.h"
#define pi 3.141592653589793238462643383279


LSM6 imu;

void serial_input_test(){
////testing input
//Serial.println("apples");
if (Serial.available()>0){
  char_input_from_serial = Serial.read();
  if (char_input_from_serial == '1'){
  //if (input_from_serial == 103){
    forward();
  }
  else{
    halt();
    }
  }
}


//should put in if negative going backwards 
void left_encoder_update(){
  encoder_count_left += 1;
  if (encoder_count_left > 200000000){
    encoder_count_left = 0;
  }
  curr_enc_count_l = encoder_count_left;
}


void right_encoder_update(){
  encoder_count_right += 1;
  if (encoder_count_right > 200000000){
    encoder_count_right = 0;
  }

  curr_enc_count_r = encoder_count_right;

}

void setup() {
  left_pwm = 100;
  right_pwm = 100;
    
  left_speed.set_setpoint(1.3);
  
  right_speed.set_setpoint(1.4);
  // put your setup code here, to run once:
  Serial.begin(9600);
  
 // encoder_count_left_1 = 0;
  pinMode(motor_driver_output_1_1,OUTPUT);
 
  pinMode(motor_driver_output_1_2,OUTPUT);

  pinMode(motor_driver_output_2_1,OUTPUT);

  pinMode(motor_driver_output_2_2,OUTPUT);

  pinMode(motor_1_enable,OUTPUT);
  pinMode(motor_2_enable,OUTPUT);
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_2_enable,HIGH);

  attachInterrupt(digitalPinToInterrupt(motor_1_enc_a),left_encoder_update,CHANGE);
  //attachInterrupt(digitalPinToInterrupt(motor_1_enc_b),left_encoder_update,CHANGE);

  attachInterrupt(digitalPinToInterrupt(motor_2_enc_a),right_encoder_update,CHANGE);
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

}//end of setup 






//class controller_diff{
//  
//  public:
//    int kp;
//    int kd;
//    int error;
//    int set_point;
//    int p_value;
//    int d_value;
//    int previous_error;
//    int error_l;
//    int error_r;
//    
//
//    //default constructor
//    controller(){
//      kp = 1;
//      kd = 1;
//      error = 0;
//      set_point = 100;
//      previous_error = 0;  
//    }
//    
//    int update_robot(int left_speed, int right_speed){
//      //error = set_point - current_value;
//      
////      error_l = left_speed - right_speed;
////      error_r = right_speed-left_speed;
//      p_value = kp * error;
//      d_value = kd * (error - previous_error);
//      previous_error = error;
//
//      
//       
//    }
//
//    void set_kp(int input_kp){
//      kp = input_kp;
//    }
//    
//    void set_kd(int input_kd){
//      kd = input_kd;
//    }
////
////    void set_set_point(int input_set_point){
////      set_point = input_set_point;
////    }
//    
//};


//ill provbably not use this merrick said other method was correct
//void encoder_pid_1(){
//  
//  millis_time_l = millis() - millis_time_l_prev;
//  millis_time_r = millis() - millis_time_r_prev;
//
//  angular_speed_l = (2*pi*encoder_count_left) / (pulse_per_rotation * millis_time_l);
//  angular_speed_r = (2*pi*encoder_count_right) / (pulse_per_rotation * millis_time_r);
//
//  millis_time_l_prev = millis_time_l;
//  millis_time_r_prev = millis_time_r;
//  encoder_count_left = 0;
//  encoder_count_right = 0;
//
//  snprintf(pid_print,sizeof(pid_print),"millis_time_l %lu, millis_time_r %lu, angular_speed_l %lu, angular_speed_r %lu",
//  millis_time_l,millis_time_r,angular_speed_l,angular_speed_r);
//
//  Serial.println(pid_print);
//
//}


void pid_l(){
  left_pwm += (int)left_speed.update_robot(velocity_l);
  
}
void pid_r(){
  right_pwm += (int)right_speed.update_robot(velocity_r);
  
}

void update_gyro_forward(){

  
 curr_time_imu = millis();
 if ((curr_time_imu - reset_time_imu ) > reset_imu_interval){
    gyro_angle_z = 0;
    reset_time_imu = curr_time_imu;
 }
 
 if ((curr_time_imu - prev_time_imu) > imu_interval){
 
   imu.read();
   gyro_raw_data_z = imu.g.z; 
   gyro_angle_z +=((gyro_raw_data_z/100));
   Serial.println(gyro_angle_z);
   
  
   
    prev_time_imu = curr_time_imu;
  }
}


void update_gyro(){

  
 curr_time_imu = millis();
 if ((curr_time_imu - reset_time_imu ) > reset_imu_interval){
    gyro_angle_z = 0;
    reset_time_imu = curr_time_imu;
 }
 
 if ((curr_time_imu - prev_time_imu) > imu_interval){
 
   imu.read();
   gyro_raw_data_z = imu.g.z; 
   gyro_angle_z +=((gyro_raw_data_z/100));
   Serial.println(gyro_angle_z);
   
  
   
    prev_time_imu = curr_time_imu;
  }
}

//
//void gyro_pid (){
//  p_d_error_val = l_r_speed.update_robot(gyro_angle_z);
//  if (p_d_error_val <0){
//    left_pwm += p_d_error_val;
//    right_pwm -= p_d_error_val; 
//  }
//  else if (p_d_error_val > 0){
//    left_pwm -= p_d_error_val;
//    right_pwm += p_d_error_val;
//  }
//}

void loop() {

//encoder pid way   
  snprintf(encoder_print,sizeof(encoder_print), "encoder_count_left %lu , encoder_count_right %lu \n", 
  encoder_count_left,encoder_count_right);
  Serial.println(encoder_print);

  //forward();
  //encoder_pid_1();
  
  curr_time = millis();

  if ((curr_time - prev_time) > interval_time){
    
//    curr_enc_count_l = encoder_count_left;
//    curr_enc_count_r = encoder_count_right;
//      
    velocity_l = ((float(curr_enc_count_l) - float(prev_enc_count_l))/ float(interval_time));
    velocity_r = ((float(curr_enc_count_r) - float(prev_enc_count_r))/ float(interval_time));
 
    prev_time = curr_time;
    prev_enc_count_l = curr_enc_count_l;
    prev_enc_count_r = curr_enc_count_r;

  }

  snprintf(misc_print,sizeof(misc_print)," curr_enc_count_l %lu , curr_enc_count_r %lu,prev_enc_count %lu,prev_enc_count %lu, velocity_l %f, velocity_r %f ",curr_enc_count_l,curr_enc_count_r,prev_enc_count_l,prev_enc_count_r,velocity_l,velocity_r); 
  Serial.println(misc_print);




  pid_l();
  pid_r();
  forward_w_speed(left_pwm,right_pwm);
  


//gyro_pid way 
//update_gyro_forward();
//gyro_pid();
//forward_w_speed(left_pwm,right_pwm);


//  forward_w_speed(50,100);
}//end of loop 

  
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
