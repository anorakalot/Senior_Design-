


void forward(){
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_1_enable,HIGH);
    
  digitalWrite(motor_driver_output_1_1,HIGH);
  digitalWrite(motor_driver_output_1_2,LOW);

  digitalWrite(motor_driver_output_2_1,HIGH);
  digitalWrite(motor_driver_output_2_2,LOW);

}

void forward_w_speed(double speed_value_l, double speed_value_r){
//  digitalWrite(motor_1_enable,HIGH);
//  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_1_enable,HIGH);
  
  analogWrite(motor_driver_output_1_1,speed_value_l);
  //digitalWrite(motor_driver_output_1_2,LOW);
  analogWrite(motor_driver_output_1_2,0);
  

  analogWrite(motor_driver_output_2_1,speed_value_r);
  //digitalWrite(motor_driver_output_2_2,LOW);
  analogWrite(motor_driver_output_2_2,0);
  
}
void reverse_w_speed(double speed_value_l, double speed_value_r){
//  digitalWrite(motor_1_enable,HIGH);
//  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_1_enable,HIGH);
  
  analogWrite(motor_driver_output_1_1,0);
  analogWrite(motor_driver_output_1_2,speed_value_l);

  analogWrite(motor_driver_output_2_1,0);
  analogWrite(motor_driver_output_2_2,speed_value_r);

}
void reverse(){
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_driver_output_1_1,LOW);
  digitalWrite(motor_driver_output_1_2,HIGH);
  digitalWrite(motor_driver_output_2_1,LOW);
  digitalWrite(motor_driver_output_2_2,HIGH);
}

void halt_digital(){
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_driver_output_1_1,HIGH);
  digitalWrite(motor_driver_output_1_2,HIGH);
  digitalWrite(motor_driver_output_2_1,HIGH);
  digitalWrite(motor_driver_output_2_2,HIGH);
  
}
void left_turn(){
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_1_enable,HIGH);
//  digitalWrite(motor_driver_output_1_1,LOW);
//  digitalWrite(motor_driver_output_1_2,HIGH);
//
//  digitalWrite(motor_driver_output_2_1,HIGH);
//  digitalWrite(motor_driver_output_2_2,LOW);

  analogWrite(motor_driver_output_1_1,0);
  analogWrite(motor_driver_output_1_2,255);

  analogWrite(motor_driver_output_2_1,255);
  analogWrite(motor_driver_output_2_2,0);

}

void right_turn(){
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_1_enable,HIGH);
//  digitalWrite(motor_driver_output_1_1,HIGH);
//  digitalWrite(motor_driver_output_1_2,LOW);
//
//  digitalWrite(motor_driver_output_2_1,LOW);
//  digitalWrite(motor_driver_output_2_2,HIGH);
  analogWrite(motor_driver_output_1_1,255);
  analogWrite(motor_driver_output_1_2,0);

  analogWrite(motor_driver_output_2_1,0);
  analogWrite(motor_driver_output_2_2,255);
}

//hatlt that works w forward_w_speed
void halt(){
//  digitalWrite(motor_driver_output_1_1,LOW);
//  digitalWrite(motor_driver_output_1_2,LOW);
//  digitalWrite(motor_driver_output_2_1,LOW);
//  digitalWrite(motor_driver_output_2_2,LOW);
//

//    digitalWrite(motor_1_enable,LOW);
//    digitalWrite(motor_1_enable,LOW);

//
//  digitalWrite(motor_driver_output_1_1,HIGH);
//  digitalWrite(motor_driver_output_1_2,HIGH);
//  digitalWrite(motor_driver_output_2_1,HIGH);
//  digitalWrite(motor_driver_output_2_2,HIGH);
//

    
//  analogWrite(motor_driver_output_1_1,0);
//  digitalWrite(motor_driver_output_1_2,LOW);
//
//  analogWrite(motor_driver_output_2_1,0);
//  digitalWrite(motor_driver_output_2_2,LOW);


  analogWrite(motor_driver_output_1_1,0);
  analogWrite(motor_driver_output_1_2,LOW);

  analogWrite(motor_driver_output_2_1,0);
  analogWrite(motor_driver_output_2_2,LOW);
  

}

unsigned long halt_time_curr;
unsigned long halt_time_prev;
unsigned long halt_interval=1000;


void halt_sec(){
  halt_time_curr = millis();
  halt_time_prev = halt_time_curr;
  while((halt_time_curr - halt_time_prev) < halt_interval){
    halt();
    halt_time_curr = millis();
    
  }
  
}




LSM6 imu;


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

//gyro_turn_func
void right_turn_w_gyro() {
  gyro_angle_z = 0;
//  halt();
//  delay(1000);
  halt_sec();
  while (gyro_angle_z > -7860) {//-8000,-7900,7850
    right_turn();
    update_gyro();
  }
//  halt();
//  delay(1000);
  halt_sec();
}




void left_turn_w_gyro() {
  gyro_angle_z = 0;
//  halt();
//  delay(1000);
  halt_sec();
  while (gyro_angle_z <7860) { //100 too small,1000,3000,6000,6500,6700,6900,7200(close),7500(30,7800(close),7900,8000(really close),7900(really close)
    left_turn();        //7900,7800(too little),7850(REALLY Good but I'm gonna try a little more
    update_gyro();
  }
//  halt();
//  delay(1000);
  halt_sec();
  gyro_angle_z = 0;
}







//this halt stops faster 
//void halt(){
//
//    digitalWrite(motor_driver_output_1_1,HIGH);
//  digitalWrite(motor_driver_output_1_2,HIGH);
//  digitalWrite(motor_driver_output_2_1,HIGH);
//  digitalWrite(motor_driver_output_2_2,HIGH);
//
//}


//
//encoder controller  NEW ENCODER COUNT ONLY
class controller_enc{
  
  public:
    double kp;
    double kd;
    double error;
    double set_point;
    double p_value;
    double d_value;
    double previous_error;

    //default constructor
    controller_enc(){
      kp = 4;//0.50 moves slow as of time of writing,0.75,2 goes to values pretty fast of velocity,3,3.2,,4
      //3 kp  was used in pid test that went pretty straight,5 was used went a luttle to the left
//kp 5 might be a little too much       
      kd = 4;//1 isn't making it change fas//t,3,3 
      //kd = 0;
      error = 0;
      set_point = 1;
      previous_error = 0;  
    }
    
    double update_robot(double current_value){
//      Serial.print("kp :");
//      Serial.println(kp);
//      Serial.print("set_point :");
//      Serial.println(set_point);

      //this is set speed wants - current speed 
      error = set_point - current_value;
//      Serial.print("ERROR :");
//      Serial.println(error);
      p_value = kp * error;
//      Serial.print("p_value:");
//      Serial.println(p_value);
      d_value = kd * (error - previous_error);
      previous_error = error;
      return (p_value + d_value);
    }

    void set_kp(double input_kp){
      kp = input_kp;
    }
    
    void set_kd(double input_kd){
      kd = input_kd;
    }

    void set_setpoint(double input_set_point){
      set_point = input_set_point;
    }
    
};

controller_enc l_speed;
controller_enc r_speed;



//nned to make function if given path go through said path
void encoder_pid() {

  //encoder pid way

  //  snprintf(encoder_print,sizeof(encoder_print), "encoder_count_left %lu , encoder_count_right %lu \n",
  //  encoder_count_left,encoder_count_right);
  //  Serial.println(encoder_print);

  //forward();
  // encoder_pid_1();

  curr_time = millis();
  
  if ((curr_time - prev_time) > interval_time) {

    ////    curr_enc_count_l = encoder_count_left;
    ////    curr_enc_count_r = encoder_count_right;
    //

    noInterrupts();
    velocity_l = ((double(curr_enc_count_l) - double(prev_enc_count_l)) / double(interval_time));
    velocity_r = ((double(curr_enc_count_r) - double(prev_enc_count_r)) / double(interval_time));
    enc_count_interval_l = curr_enc_count_l - prev_enc_count_l;
    enc_count_interval_r = curr_enc_count_r - prev_enc_count_r;
    interrupts();
    prev_time = curr_time;
    prev_enc_count_l = curr_enc_count_l;
    prev_enc_count_r = curr_enc_count_r;


    //pid_l_r();//actuall sets the pwm_l and pwm_r using controller class in global values.h
    
    //p_d_error_val = l_r_speed_vel.update_robot(enc_count_interval_l, enc_count_interval_r);
    p_d_error_val_l = l_speed.update_robot(velocity_l);
    p_d_error_val_r = r_speed.update_robot(velocity_r);

    p_d_error_val_abs_l = abs( p_d_error_val_l);
    p_d_error_val_abs_r = abs( p_d_error_val_r);
    
    
//    Serial.print("p_d_error_val : ");
//    Serial.println(p_d_error_val);
    //p_d_error_val_abs = abs(p_d_error_val);


      //changing spped for seperate velocity encoder pid 
      if (p_d_error_val_l < 0){
        left_pwm -= p_d_error_val_abs_l;
      }
      else if (p_d_error_val_l > 0){
        left_pwm += p_d_error_val_abs_l;
      }


      if (p_d_error_val_r < 0){
        right_pwm -= p_d_error_val_abs_r;
      }
      else if (p_d_error_val_r > 0){
        right_pwm += p_d_error_val_abs_r;
      }

      
    //set speed for p_d_error_val 
//    if (p_d_error_val < 0) {
//      Serial.println("less than 0");
//      
//      right_pwm -= p_d_error_val_abs;
//      left_pwm += p_d_error_val_abs;
//      //left_pwm += abs(p_d_error_val);
//
//      
//    }
//    else if (p_d_error_val > 0) {
//      Serial.println("more than 0");
//      right_pwm += p_d_error_val_abs;
//      left_pwm -= p_d_error_val_abs;
//      //left_pwm -= abs(p_d_error_val);
//    }


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
//    Serial.println();
//    Serial.print("left_pwm :");
//    Serial.println(left_pwm);
//    Serial.print("right_pwm:");
//    Serial.println(right_pwm);
    forward_w_speed(left_pwm , right_pwm); //since it keeps going to the left make left motor slightly faster//5 goes to the right,3 going to the left,
  
  //snprintf(misc_print_1,sizeof(misc_print_1)," curr_enc_count_l %lu , curr_enc_count_r %lu,prev_enc_count %lu,prev_enc_count %lu, velocity_l %f, velocity_r %f ",curr_enc_count_l,curr_enc_count_r,prev_enc_count_l,prev_enc_count_r,velocity_l,velocity_r);
  snprintf(misc_print_1,sizeof(misc_print_1), "velocity_l %f, velocity_r %f ,left_pwm%f, right_pwm %f",velocity_l,velocity_r,left_pwm,right_pwm);
//  Serial.print("l setpoint");
//  Serial.println(l_speed.set_point);
//  Serial.print("r setpoint");
//  Serial.println(r_speed.set_point);
  

  //snprintf(misc_print_1, sizeof(misc_print_1), " curr_enc_count_l %lu , curr_enc_count_r %lu,prev_enc_count %lu,prev_enc_count %lu, ", curr_enc_count_l, curr_enc_count_r, prev_enc_count_l, prev_enc_count_r);
  //snprintf(misc_print_2, sizeof(misc_print_2), " enc_count_interval_l %i, enc_count_interval_r %i", enc_count_interval_l, enc_count_interval_r);
  Serial.println(misc_print_1);
  //Serial.println(misc_print_2);
  }

  //////
  ////  pid_l();
  ////  pid_r();
  
}//end of encoder pid



void go_one_cell(){
//  halt();
//  delay(2000);
  halt_sec();

   //Serial.println("outside while");
   //need to set this before going into loop so that it doesn't take into account enc revolutions during turn
   go_one_cell_curr = curr_enc_count_l;
   go_one_cell_prev = go_one_cell_curr;
   prev_enc_count_l = curr_enc_count_l;
   prev_enc_count_r = curr_enc_count_r;
  while ((go_one_cell_curr - go_one_cell_prev) < go_one_cell_length){//go_one_cell_length needs to be bigger 
      //Serial.println("inside while");
      noInterrupts();
      go_one_cell_curr = curr_enc_count_l;
      interrupts();
      
//      snprintf(cell_print,sizeof(cell_print),"go_one_cell_curr : %lu,go_one_cell_prev: %lu",go_one_cell_curr, go_one_cell_prev);
//      Serial.println(cell_print);
//      Serial.println(":)");

    
//    //gyro_angle_z_forward = 150;//1000(goes to the right),750,100000000(goes to the right);,750,600(goes to right),500(goes to right),250
////    gyro_angle_z_forward = 0;
//    //noInterrupts();
////    halt();
////    delay(1000);
//    Serial.println("after delay");
//    //interrupts();
//    halt();
//    delay(1000);
//////
////    left_turn_w_gyro();
////    halt();
////    delay(1000);
        encoder_pid();
    //forward_w_speed(100,100);  
  }//end of while
  go_one_cell_prev = go_one_cell_curr;
//    halt();
//    delay(2000);
  halt_sec();
}
//STUFF TO COMMUNICATE TO OTHER TEENSY 



//STUFF FOR TRAVERSAL 

////just use this coord for testing before fully integratin a star search into proto 5 
//struct coord{
//  int x;
//  int y;
//  int cost;
//};

//outdated a star search 
//coord reverse_path[100];

//int reverse_path_index;
//
//int maze[5][5];





//int direction_robot= 1;
//1 = forward, 
//
//struct custom_stack{
//  coord stack[200];
//    
//};







////
//void pop(){
// for (int x = 0; x < 200; x++) {
//   if (maze_stack
// }
//
//}

//example is [3] [5] 
// 0 1 2 3 4 
// 0
// 1
// 2


void motor_init(){
  motor_state = MOTOR_INIT;
}

//enum MOTOR_STATES {MOTOR_INIT, GO_ONE_CELL, CHOOSE_MOVE, TURN_REVERSE, TURN_LEFT, TURN_RIGHT,MICRO_ADJ } motor_state;

char current_motor_dir_val = 'u';

int go_one_cell_next = 0;

void motor_tick(){

  switch (motor_state) { //transitions
    case MOTOR_INIT:
      //motor_state = GO_ONE_CELL;
      motor_state = CHOOSE_MOVE;
      break;
    case CHOOSE_MOVE:
//      get_sonar_dist();
//      get_sonar_dist(); 


        
        if (at_goal_bool == 1){
          motor_state = TEMP_HALT;
          go_one_cell_next = 0;//just in case it was called but it shouldn't
          break;
        }
        
        if (go_one_cell_next == 1){
          motor_state = GO_ONE_CELL;
          go_one_cell_next = 0;//reset go_one_cell_next
          break;
        }

       treamux_func();//now direction_val from tremaux has been updated;
       //put this in here so there's not extra go_one_cell at the end
       if (at_goal_bool == 1){
        motor_state = TEMP_HALT;
        go_one_cell_next = 0;
        break;
       }
       if (current_motor_dir_val == direction_val){
        motor_state = GO_ONE_CELL;//IF IT'S SAME DIRECTION JUST KEEP GOING
       }
       //if direction is not the same
       else {
        if (current_motor_dir_val == 'd'){
          if (direction_val == 'u'){
            motor_state = TURN_REVERSE;
            go_one_cell_next = 1;//NEEDS TO GO ONE_CELL_NEXT
            current_motor_dir_val = direction_val;
          }
          else if (direction_val == 'l'){
            motor_state = TURN_RIGHT;
            go_one_cell_next = 1;//NEEDS TO GO ONE_CELL_NEXT
          }
          else if (direction_val == 'r'){
            motor_state = TURN_LEFT;
            go_one_cell_next = 1;//NEEDS TO GO ONE_CELL_NEXT
          }
          current_motor_dir_val = direction_val;// this should work since all of them are set to their respective direction 
        }// end of if current == 'd';

        if (current_motor_dir_val == 'u'){
          if (direction_val == 'd'){
            motor_state = TURN_REVERSE;
            go_one_cell_next = 1;//NEEDS TO GO ONE_CELL_NEXT
            
          }
          else if (direction_val == 'l'){
            motor_state = TURN_LEFT;
            go_one_cell_next = 1;//NEEDS TO GO ONE_CELL_NEXT
            
          }
          else if (direction_val == 'r'){
            motor_state = TURN_RIGHT;
            go_one_cell_next = 1;//NEEDS TO GO ONE_CELL_NEXT
            
            
          }
          current_motor_dir_val = direction_val;//should work for all
        }// end of if current == 'u';

      if (current_motor_dir_val == 'l'){
          if (direction_val == 'd'){
            motor_state = TURN_LEFT;
            go_one_cell_next = 1;//NEEDS TO GO ONE_CELL_NEXT
            
            
          }
          else if (direction_val == 'u'){
            motor_state = TURN_RIGHT;
            go_one_cell_next = 1;//NEEDS TO GO ONE_CELL_NEXT
            
            
          }
          else if (direction_val == 'r'){
            motor_state = TURN_REVERSE;
            go_one_cell_next = 1;//NEEDS TO GO ONE_CELL_NEXT
            
          }
          current_motor_dir_val = direction_val; // should work for all
      }//end of if current == 'l' 


      
      if (current_motor_dir_val == 'r'){
          if (direction_val == 'l'){
            motor_state = TURN_REVERSE;
            go_one_cell_next = 1;//NEEDS TO GO ONE_CELL_NEXT
            
          }
          else if (direction_val == 'u'){
            motor_state = TURN_LEFT;
            go_one_cell_next = 1;//NEEDS TO GO ONE_CELL_NEXT
            
          }
          else if (direction_val == 'd'){
            motor_state = TURN_RIGHT;
            go_one_cell_next = 1;//NEEDS TO GO ONE_CELL_NEXT
            
          }
          current_motor_dir_val = direction_val;//should work for all
      }//end of if current == 'r' 
      
        
      }//end of else
       
      break;
    case GO_ONE_CELL:
      motor_state = CHOOSE_MOVE;
      break;
    case TURN_REVERSE:
      motor_state = CHOOSE_MOVE;
      break;
      //break;
    case TURN_LEFT:
      motor_state = CHOOSE_MOVE;
      break;
    case TURN_RIGHT:
      motor_state  = CHOOSE_MOVE;
      break;
    case TEMP_HALT:
      motor_state = CHOOSE_MOVE;
      break;
      
    case SONAR_SENSOR:
      motor_state = CHOOSE_MOVE;
      break;
    //these are different since it happens at the end
    case ADJUST_TO_CUP:
      
      break;
    case ADJUST_TO_SONAR:
    
      break;
    case COMM_TO_OTHER_TEENSY:
    
      break;
      
    default:
      
      motor_state = GO_ONE_CELL;
      break;
      
  }//end of transitions
  
  switch (motor_state) { //actions
    case MOTOR_INIT:
      //motor_state = GO_ONE_CELL;
      //motor_state = CHOOSE_MOVE;
      //NOTHING
      break;
    case CHOOSE_MOVE:

      //NOTHING CHOOSE_MOVE: 
      //IS JUST FOR CHOOSING NEXT TRANSISTION NO ACTIONS
      
      break;
    case GO_ONE_CELL:
      go_one_cell();
      break;
    case TURN_REVERSE:
      left_turn_w_gyro();
      left_turn_w_gyro();
      break;
    case TURN_LEFT:
      left_turn_w_gyro();
      break;
    case TURN_RIGHT:
      right_turn_w_gyro();
      break;
    case TEMP_HALT:
      halt_sec();
      break;
      
    case SONAR_SENSOR:
      get_sonar_dist();
      break;
    case ADJUST_TO_CUP:
      break;
    case ADJUST_TO_SONAR:
      break;
    case COMM_TO_OTHER_TEENSY:
      break; 
         
    
      


  }//end of actions
  
}
