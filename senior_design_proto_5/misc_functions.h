//
////encoder controller  Encoder Diff
//class controller_enc_diff{
//  
//  public:
//    int kp;
//    int kd;
//    int error;
//    int set_point;
//    int p_value;
//    int d_value;
//    int previous_error;
//
//    //default constructor
//    controller_enc_diff(){
//      kp = 1;
//      kd = 1;
//      error = 0;
//      set_point = 500;
//      previous_error = 0;  
//    }
//    
//    int update_robot(int left_enc_count,int right_enc_count){
//      Serial.print("kp :");
//      Serial.println(kp);
//      
//      error = left_enc_count-right_enc_count;
//      
//      Serial.print("ERROR :");
//      Serial.println(error);
//      p_value = kp * error;
//      Serial.print("p_value:");
//      Serial.println(p_value);
//      d_value = kd * (error - previous_error);
//      previous_error = error;
//      return (p_value + d_value);
//    }
//
//    void set_kp(int input_kp){
//      kp = input_kp;
//    }
//    
//    void set_kd(int input_kd){
//      kd = input_kd;
//    }
//
//    void set_setpoint(int input_set_point){
//      set_point = input_set_point;
//    }
//    
//};
//controller_enc_diff l_r_speed;
//
////new controller enc diff with float 
////encoder controller  Encoder Diff
//class controller_enc_diff_vel{
//  
//  public:
//    float kp;
//    float kd;
//    float error;
//    float set_point;
//    float p_value;
//    float d_value;
//    float previous_error;
//
//    //default constructor
//    controller_enc_diff_vel(){
//      kp = 1;
//      kd = 1;
//      error = 0;
//      set_point = 500;
//      previous_error = 0;  
//    }
//    
//    float update_robot(float left_enc_count,float right_enc_count){
//      Serial.print("kp :");
//      Serial.println(kp);
//      
//      //error = left_enc_count-right_enc_count;
//      error = velocity_l - velocity_r;
//      Serial.print("ERROR :");
//      Serial.println(error);
//      p_value = kp * error;
//      Serial.print("p_value:");
//      Serial.println(p_value);
//      d_value = kd * (error - previous_error);
//      previous_error = error;
//      return (p_value + d_value);
//    }
//
//    void set_kp(int input_kp){
//      kp = input_kp;
//    }
//    
//    void set_kd(int input_kd){
//      kd = input_kd;
//    }
//
//    void set_setpoint(int input_set_point){
//      set_point = input_set_point;
//    }
//    
//};
//
//controller_enc_diff_vel l_r_speed_vel;
//
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



char direction_micro_adj;
char sonar_direction_micro_adj;

class controller_micro_adjustment{
  
  public:
    double kp;
    //double kd;
    double error;
    double set_point;
    double p_value;
    double d_value;
    double previous_error;

    //default constructor
    controller_micro_adjustment(){
      kp = 0.5;//1,
      error = 0;
      set_point = 330;
      previous_error = 0;  
    }
    
    double update_robot(double current_value){
      error = set_point - current_value;
      Serial.print("ERROR IN MICRO ADJ CONTROLLER");
      Serial.println(error);
      
      if (error < 0){
        direction_micro_adj = 'r';
        sonar_direction_micro_adj = 'u';
      }
      
      else if (error > 0){
        direction_micro_adj = 'l';
        sonar_direction_micro_adj = 'd';
      }
      
      p_value = kp * error;

      previous_error = error;
      //Serial.print("p_value ");
      //Serial.println(p_value);
      return (p_value );
    }

    void set_kp(double input_kp){
      kp = input_kp;
    }
    
//    void set_kd(int input_kd){
//      kd = input_kd;
//    }

    void set_setpoint(double input_set_point){
      set_point = input_set_point;
    }
    
};
controller_micro_adjustment micro_adjust_l_r;
controller_micro_adjustment micro_adjust_u_d;
