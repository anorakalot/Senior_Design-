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
      kp = 3;//0.50 moves slow as of time of writing,0.75,2 goes to values pretty fast of velocity
      //kd = 1;
      kd = 0;
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

    double set_kp(double input_kp){
      kp = input_kp;
    }
    
    double set_kd(double input_kd){
      kd = input_kd;
    }

    double set_setpoint(double input_set_point){
      set_point = input_set_point;
    }
    
};

controller_enc l_speed;
controller_enc r_speed;


//encoder controller  Encoder Diff
class controller_enc_diff{
  
  public:
    int kp;
    int kd;
    int error;
    int set_point;
    int p_value;
    int d_value;
    int previous_error;

    //default constructor
    controller_enc_diff(){
      kp = 1;
      kd = 1;
      error = 0;
      set_point = 500;
      previous_error = 0;  
    }
    
    int update_robot(int left_enc_count,int right_enc_count){
      Serial.print("kp :");
      Serial.println(kp);
      
      error = left_enc_count-right_enc_count;
      
      Serial.print("ERROR :");
      Serial.println(error);
      p_value = kp * error;
      Serial.print("p_value:");
      Serial.println(p_value);
      d_value = kd * (error - previous_error);
      previous_error = error;
      return (p_value + d_value);
    }

    void set_kp(int input_kp){
      kp = input_kp;
    }
    
    void set_kd(int input_kd){
      kd = input_kd;
    }

    void set_setpoint(int input_set_point){
      set_point = input_set_point;
    }
    
};
controller_enc_diff l_r_speed;

//new controller enc diff with float 
//encoder controller  Encoder Diff
class controller_enc_diff_vel{
  
  public:
    float kp;
    float kd;
    float error;
    float set_point;
    float p_value;
    float d_value;
    float previous_error;

    //default constructor
    controller_enc_diff_vel(){
      kp = 1;
      kd = 1;
      error = 0;
      set_point = 500;
      previous_error = 0;  
    }
    
    float update_robot(float left_enc_count,float right_enc_count){
      Serial.print("kp :");
      Serial.println(kp);
      
      //error = left_enc_count-right_enc_count;
      error = velocity_l - velocity_r;
      Serial.print("ERROR :");
      Serial.println(error);
      p_value = kp * error;
      Serial.print("p_value:");
      Serial.println(p_value);
      d_value = kd * (error - previous_error);
      previous_error = error;
      return (p_value + d_value);
    }

    void set_kp(int input_kp){
      kp = input_kp;
    }
    
    void set_kd(int input_kd){
      kd = input_kd;
    }

    void set_setpoint(int input_set_point){
      set_point = input_set_point;
    }
    
};

controller_enc_diff_vel l_r_speed_vel;

//change gyro to zero after every cell since it gets less accurate over time
////imu controller
class controller_imu{
  
  public:
    double kp;
    double kd;
    double error;
    double set_point;
    double p_value;
    double d_value;
    double previous_error;

    //j means jittery
    //default constructor
    controller_imu(){
      kp = 0.00005;//0.25,0.05(jittery overshoots)0.02(still jitter),0.01(j),0.0002(j),0.000005(works good alone and for first 3 cells(//0.000005;(works
      //kd = 0.00005;//0.25,0.05(jittery overshoots),0.02(still jittery),0.01(j)
      kd = 0;
      error = 0;
      set_point = 0;
      previous_error = 0;  
    }
    
    double update_robot(double current_value){
      error = set_point - current_value;
      p_value = kp * error;
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
controller_imu l_r_speed_imu;

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


//void pid_l(){
//  //left_pwm += (int)left_speed.update_robot(velocity_l);
//  p_d_error_val = left_speed.update_robot(enc_count_interval_l);
////  Serial.print("P_d_error_val l: ");
////  Serial.println(p_d_error_val);
//  left_pwm += p_d_error_val;
//
//}
//void pid_r(){
//  //right_pwm += (int)right_speed.update_robot(velocity_r);
//  p_d_error_val = right_speed.update_robot(enc_count_interval_r);
////  Serial.print("p_d_error_val r: ");
////  Serial.println(p_d_error_val);
//  right_pwm += p_d_error_val;
//
//}



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



}
