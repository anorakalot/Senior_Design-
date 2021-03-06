
//int motor_1_enc_a = 13;
//int motor_1_enc_b = 14;
//
//int motor_2_enc_a = 13;
//int motor_2_enc_b = 14;


int motor_1_enable = 20;
int motor_2_enable = 21;

int motor_1_enc_a = 15;
int motor_1_enc_b = 2;

int motor_2_enc_a = 17;
int motor_2_enc_b = 16;


int led_pin = 1;
//
//int motor_driver_output_1_1 = 22;
//int motor_driver_output_1_2 = 23;

int motor_driver_output_1_1 = 3;
int motor_driver_output_1_2 = 4;

//
//int motor_driver_output_2_1 = 20;
//int motor_driver_output_2_2 = 21;

int motor_driver_output_2_1 = 5;
int motor_driver_output_2_2 = 6;



//unsigned long encoder_count_left = 0;
//unsigned long encoder_count_right = 0;

unsigned long encoder_count_left = 0;
unsigned long encoder_count_right = 0;



char encoder_print[90];

//GYRO
unsigned long curr_time_imu = 0;
unsigned long prev_time_imu = 0;

unsigned long imu_interval =10;

//float angle_time_rate = 0.01;
//
//float gyro_raw_data_z;
//float gyro_angle_z;

int gyro_raw_data_z;
int gyro_angle_z;

unsigned long reset_time_imu = 0;
unsigned long reset_imu_interval = 1000;


float pulse_per_rotation = 4741.44/4;

//float pi_value = pi;

int angular_speed_l;
int angular_speed_r;


int millis_time_l;
int millis_time_r;

int millis_time_l_prev = 0;
int millis_time_r_prev = 0;

char pid_print[100];



unsigned long curr_time=0; 
unsigned long prev_time = 0;

//unsigned long interval_time = 1000;
unsigned long interval_time = 500;

unsigned long curr_enc_count_l = 0;
unsigned long curr_enc_count_r = 0;

unsigned long prev_enc_count_l = 0;
unsigned long prev_enc_count_r = 0;


//unsigned long velocity_l;
//unsigned long velocity_r;

float velocity_l;
float velocity_r;

char misc_print[200];

//starting values for analog speed
int analog_speed_l  = 100;
int analog_speed_r = 100;


//input
char char_input_from_serial;

//PID values 
int left_pwm=100;
int right_pwm=100;

//
//encoder controller
class controller{
  
  public:
    float kp;
    float kd;
    float error;
    float set_point;
    float p_value;
    float d_value;
    float previous_error;

    //default constructor
    controller(){
      kp = 2;
      kd = 2;
      error = 0;
      set_point = 100;
      previous_error = 0;  
    }
    
    int update_robot(float current_value){
      error = set_point - current_value;
      p_value = kp * error;
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

controller left_speed;
controller right_speed;



////imu controller
class controller_imu{
  
  public:
    int kp;
    int kd;
    int error;
    int set_point;
    int p_value;
    int d_value;
    int previous_error;

    //default constructor
    controller_imu(){
      kp = 1;
      kd = 1;
      error = 0;
      set_point = 0;
      previous_error = 0;  
    }
    
    int update_robot(int current_value){
      error = set_point - current_value;
      p_value = kp * error;
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
controller_imu l_r_speed;
int p_d_error_val;
//controller left_speed;
//controller right_speed;
