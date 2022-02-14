
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


float gyro_raw_data_z;


float gyro_angle_z;

float angle_time_rate = 0.01;

float accel_raw_data_z;

float accel_data; 

float angle; 




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


//
