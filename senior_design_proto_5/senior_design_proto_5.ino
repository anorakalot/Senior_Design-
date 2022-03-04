#include <Wire.h>
#include <LSM6.h>
#include <math.h>    // (no semicolon)  
#include "global_values.h"
#include "gyro_func.h"
#include "sonar_func.h"
#include "tremaux_func.h"
#include "motor_func.h"
#include "misc_functions.h"



#define pi 3.141592653589793238462643383279





//should put in if negative going backwards
void left_encoder_update() {
  encoder_count_left += 1;
  if (encoder_count_left > 4000000000){//200000000 {
    encoder_count_left = 0;
  }
  curr_enc_count_l = encoder_count_left;
}


void right_encoder_update() {
  encoder_count_right += 1;
  if (encoder_count_right > 4000000000){ //200000000
    encoder_count_right = 0;
  }

  curr_enc_count_r = encoder_count_right;

}


void setup() {

 //SETUP FOR TREAMUX 
 //start_pos.x = 0;
  //start_pos.y = 4;
  start_pos.y = 4;
  start_pos.x = 0;
  
  //goal.x = 4;
  //goal.y = 4;
  goal.y = 0;
  goal.x = 4;
  Serial.begin(9600);
  //Serial.println("BEFORE_DELAY");
//    delay(2000);
//  delay(2000);
// candidates = neighbors_func(start_pos);
// Serial.println("Neighbors");
//  for (int i = 0; i < 4; i ++){
//    snprintf(misc_print_1,sizeof(misc_print_1), "[%i],[%i]\n",candidates[i].x,candidates[i].y);
//    Serial.println(misc_print_1);
//  }


   for (int y = 0; y < 5 ; y++){
    for (int x = 0; x < 5; x++){
      maze[y][x].x = x;
      maze[y][x].y = y;
      maze[y][x].is_accesible_bool = 1;//sets all spaces to be accessible at the start 
      maze[y][x].visited_num = 0;
    }
   }
   ////Serial.println("Maze");
   for (int y = 0; y < 5 ; y++){
    for (int x = 0; x < 5; x++){
      snprintf(misc_print_1,sizeof(misc_print_1), "[%i][%i] ",maze[y][x].y,maze[y][x].x);
      //Serial.print(misc_print_1);
    }
    //Serial.println();
  }

   //delay(5000);
 

   //Serial.println("Visited_num at beginning");
   for (int y = 0; y < 5 ; y++){
    for (int x = 0; x < 5; x++){
    
    snprintf(misc_print_1,sizeof(misc_print_1), "%i ",maze[y][x].visited_num);
    //Serial.print(misc_print_1);
    }
    
    //Serial.println();
   
   }

  
  //PUT IN TEST OBSTACLES
  //Serial.println("PUTTING IN OBSTACLES");
//  maze[1][0].is_accesible_bool = 0;
//  maze[1][1].is_accesible_bool = 0;
//  maze[1][2].is_accesible_bool = 0;
//  maze[1][3].is_accesible_bool = 0;
//  
   

//  
//  for(int y = 0; y< 5; x ++){
//    for ( int x = 0; x < 5; y++){
//        maze[y][x] = manhattan_distance_func(
//    }
//  }

//JUST CHECKS
  //checks.push(start_pos);
//need to make start _pos visited_num = 1

  //should be one
  maze[start_pos.y][start_pos.x].visited_num += 1;
  

   //Serial.println("Visited_num after setting start");
   for (int y = 0; y < 5 ; y++){
    for (int x = 0; x < 5; x++){
    
    snprintf(misc_print_1,sizeof(misc_print_1), "%i ",maze[y][x].visited_num);
    //Serial.print(misc_print_1);
    }
    
    //Serial.println();
   
   }
   
  snprintf(misc_print_1,sizeof(misc_print_1), "start_pos.y %i, start_pos.x  %i, goal.y %i , goal.x %i ,start_pos visited_num:%i \n",
  start_pos.y,start_pos.x
  ,goal.y, goal.x,maze[start_pos.y][start_pos.x].visited_num);
  //Serial.print(misc_print_1);
  
  //SETUP FOR EVERYTHING ELSE
  
  pinMode(trig_pin_2,OUTPUT);
  pinMode(echo_pin_2,INPUT);

  pinMode(trig_pin_3,OUTPUT);
  pinMode(echo_pin_3,INPUT);
  
  pinMode(trig_pin_1,OUTPUT);
  pinMode(echo_pin_1,INPUT);




  
  

  //left_pwm = 100;
  //right_pwm = 100;
  //left_pwm = 80;
  //right_pwm = 80;
  
  
//  left_pwm = 83;
//  right_pwm = 83;


//  left_pwm = 95;
//  right_pwm = 95;
//  left_pwm = 100;
//  right_pwm = 100;
  
//    left_pwm = 75;
//    right_pwm = 75;
//latest pwm values 
//  left_pwm = 105;
//  right_pwm = 105;
//
//  left_pwm = 85;
//  right_pwm = 85;
//

  left_pwm = 90;//100
  right_pwm = 90;//100
  
  //l r setpoint 0.70 and 0.67 goes to the right
  //l r setpoint 0.70 and 0.68 goes to the right
  //l r setpoint 0.70 and 0.69 goes to the right

  // l r setpoint 0.70 and 0.70 goes pretty straightt
  //l_speed.set_setpoint(0.50);//0.65,0.70,0.71 movse to the right 0.70
  //r_speed.set_setpoint(0.49);                                 //  0.70
//
//  l_speed.set_setpoint(0.60);
//  r_speed.set_setpoint(0.60);
//  
  
//  l_speed.set_setpoint(0.50);
//  r_speed.set_setpoint(0.50);
  //l_speed.set_setpoint(0.60);

//l_speed used to be 0.68
//  l_speed.set_setpoint(0.66);
//  //increase setpoint to the left since it veers to the left 
//  //making left faster to encounter for the offset
//  r_speed.set_setpoint(0.64);

//  l_speed.set_setpoint(0.65);
//  //increase setpoint to the left since it veers to the left 
//  //making left faster to encounter for the offset
//  r_speed.set_setpoint(0.64);
//

//
//  l_speed.set_setpoint(0.66);  
//  r_speed.set_setpoint(0.65);//goes left

//  l_speed.set_setpoint(0.67);  
//  r_speed.set_setpoint(0.64);


//  l_speed.set_setpoint(0.66);
//  r_speed.set_setpoint(0.65);

 // l_speed.set_setpoint(0.65);//goes left not good
 // r_speed.set_setpoint(0.65);


  l_speed.set_setpoint(0.66);
  r_speed.set_setpoint(0.65);
  
  micro_adjust_u_d.set_setpoint(400);//380,400
  micro_adjust_u_d.set_kp(1.5);//
  
  
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



  // encoder_count_left_1 = 0;
  pinMode(motor_driver_output_1_1, OUTPUT);

  pinMode(motor_driver_output_1_2, OUTPUT);

  pinMode(motor_driver_output_2_1, OUTPUT);

  pinMode(motor_driver_output_2_2, OUTPUT);

  pinMode(motor_1_enable, OUTPUT);
  pinMode(motor_2_enable, OUTPUT);
  digitalWrite(motor_1_enable, HIGH);
  digitalWrite(motor_2_enable, HIGH);

  digitalWrite(pin_send,LOW);

  attachInterrupt(digitalPinToInterrupt(motor_1_enc_a), left_encoder_update, CHANGE);
  //attachInterrupt(digitalPinToInterrupt(motor_1_enc_b),left_encoder_update,CHANGE);

  attachInterrupt(digitalPinToInterrupt(motor_2_enc_a), right_encoder_update, CHANGE);
  //attachInterrupt(digitalPinToInterrupt(motor_2_enc_b),right_encoder_update,CHANGE);

  pinMode(pin_recieve,INPUT);
  pinMode(pin_send,OUTPUT);
  Wire.begin();

  while (!imu.init()) {
    //Serial.println("IMU INIT FAILED");
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
//  for (int x = 0; x < 100; x ++){
//      encoder_pid();
//  }

  //halt();

  dist_val_middle= 1000;
    //get_sonar_dist();
  while(dist_val_middle >240){//250
    //Serial.println("INSIDE SETUP WHILE"); 
    get_sonar_dist();
    
  }
  
  //delay(8000);
  //initialize the motor_state
  motor_init();
  //delay(500);
  //delay(4000);

}//end of setup














//void reverse_turn_w_gyro() {
//  gyro_angle_z = 0;
//  halt_sec();
//  while (gyro_angle_z <15700 ) {//-8000,-7900,7850
//    //right_turn();
//    left_turn();
//    update_gyro();
//  }
//  halt_sec();
//}




unsigned long forward_curr_time = 0;
unsigned long forward_prev_time = 0;

void forward_w_time(unsigned long enc_interval_length){
  //halt();
  halt_sec();
  forward_enc_count_curr = curr_enc_count_l;
  forward_enc_count_prev = forward_enc_count_curr;
  
  while (forward_enc_count_curr- forward_enc_count_prev < enc_interval_length) { 
    forward_enc_count_curr = curr_enc_count_r;
    //forward();
    forward_w_speed(100,100);
  }
  right_turn_enc_count_prev = right_turn_enc_count_curr;
  //halt();
  halt_sec();
  
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
    //Serial.println(gyro_angle_z_forward);



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

unsigned long test_time_curr=0;
unsigned long test_time_prev=0;
unsigned long test_forw_interval = 5000;
unsigned long test_halt_interval = 1000;
  
void loop() {
 //go_one_cell();
 motor_tick();
  //sonar_adjust_to_block();
  //adjust_to_cup();
 //dist_val_mid();
  //get_sonar_dist_mid();
  //left_turn_w_gyro();
  //right_turn_w_gyro();
  //encoder_pid();
  //
// forward_w_speed(106,103);
// delay(1000);
// halt_500_sec();
// reverse_w_speed(106,103);
// delay(700);
// halt_500_sec();
 //get_sonar_dist();
   
//  right_turn_w_gyro();
//  right_turn_w_gyro();
  //reverse_turn_w_gyro();
  
//  test_time_curr = millis();
//  test_time_prev = test_time_curr;
//  while((test_time_curr - test_time_prev) < test_forw_interval){
//    Serial.println("IN FORWARD");
//    forward_w_speed(60,60);
//    test_time_curr = millis();
//  }
//  
//  test_time_curr = millis();
//  test_time_prev = test_time_curr;
//  while((test_time_curr - test_time_prev)< test_halt_interval){
//    Serial.println("IN HALT");
//    halt();
//    test_time_curr = millis();
//  }
//  other_teensy_comm();
//  //end of other_teensy_comm test


//get_sonar_dist();

//go_one_cell();
//sonar_adjust_to_block TEST DONE
//sonar_adjust_to_block();
//
//for (int x = 0; x < 4; x++){
//  sonar_adjust_to_block();  
//}

//left_turn_w_enc(1000);
//right_turn_w_enc(1000);

//forward_w_enc(1000);
//reverse_w_enc(1000);

//forward();
//delay(1000);
//reverse();
//delay(1000);
//
//forward_w_speed(60,60);
//delay(1000);
//reverse_w_speed(60,60);
//delay(1000);

//forward_w_enc(100);

//forward_w_enc(1000);
//forward();
//delay(1000);
//halt_sec();

//go_one_cell();

//forward_w_speed(255,255);
//left_turn_w_gyro();
//right_turn_w_gyro();
//delay(1000);

//halt();
//delay(1000);
////halt_digital();
////delay(1000);
//////Serial.println("AFTER_FORWARD_W_ENC");
//reverse_w_enc(100);
//reverse_w_speed(255,255);
//delay(1000);
//halt();
//delay(1000);

//halt_digital();
//delay(1000);
//halt();
//delay(1000);
  
//  forward_w_speed(60,60);
//  halt();
//  delay(1000);
  //delay(1000);
//get_sonar_dist();
 // go_one_cell();
  //left_turn_w_gyro();
  //left_turn_w_gyro();
  //right_turn_w_gyro();

  //adjust to cup works GOOD!
  //adjust_to_cup();

//  left_turn_w_enc(100);
//  right_turn_w_enc(100);
  //Serial.println("APPLES");
  //left_turn_w_enc(100);
  //  go_one_cell();
//  go_one_cell();
//encoder_pid();
//  //use tthis to test pid going straight
//encoder_pid();
//go_one_cell();

  //continous signarl 
  //delay(2000)

//testing w_enc func
//right_turn_w_enc(100);
//left_turn_w_enc(100);
  
//  if (testing_flag == 0){
////    halt();
////    delay(1000);
//    adjust_to_cup();
////    halt();
////    delay(1000);
//    //testing_flag = 1;
//  }
//  
////adjust_to_cup();



}//end of loop




//forward_w_speed(100,100);
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
