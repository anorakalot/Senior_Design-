
//int motor_1_enc_a = 13;
//int motor_1_enc_b = 14;
//
//int motor_2_enc_a = 13;
//int motor_2_enc_b = 14;

unsigned long go_one_cell_curr=0;
unsigned long go_one_cell_prev=0;
unsigned long go_one_cell_length=2700;//3000,2500,(1750 5 percent way there ,2300(really close to one cell,2400
//1500,500

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

int gyro_raw_data_z=0;
int gyro_angle_z=0;

unsigned long reset_time_imu = 0;
unsigned long reset_imu_interval = 1000;


//gyro_forward
int gyro_pid_bool;

unsigned long imu_counter_forward = 0;
unsigned long curr_time_imu_forward = 0;
unsigned long prev_time_imu_forward = 0;

unsigned long imu_interval_forward =5;//10

//float angle_time_rate = 0.01;
//
//float gyro_raw_data_z;
//float gyro_angle_z;

double gyro_raw_data_z_forward=0;
double gyro_data_calc_z_forward=0;
double gyro_angle_z_forward=0;

unsigned long reset_time_imu_forward = 0;
unsigned long reset_imu_interval_forward = 200;//1000 (maybe too high)


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
//unsigned long interval_time = 300;
unsigned long interval_time = 300;//1000,500


unsigned long curr_enc_count_l = 0;
unsigned long curr_enc_count_r = 0;

unsigned long prev_enc_count_l = 0;
unsigned long prev_enc_count_r = 0;


//unsigned long velocity_l;
//unsigned long velocity_r;

double velocity_l;
double velocity_r;
int enc_count_interval_l;
int enc_count_interval_r;



char misc_print_1[200];
char misc_print_2[200];
char misc_print_3[200];
char misc_print_4[200];
char misc_print_5[200];


//
////starting values for analog speed
//int analog_speed_l  = 100;
//int analog_speed_r = 100;


//input
char char_input_from_serial;

//PID values 
double p_d_error_val=0;
double p_d_error_val_abs = 0;

double p_d_error_val_l = 0;
double p_d_error_val_abs_l = 0;

double p_d_error_val_r = 0;
double p_d_error_val_abs_r = 0;



//double left_pwm=100;
//double right_pwm=100;
double left_pwm=80;
double right_pwm=80;


//teensy communication
int pin_recieve = 13;
int pin_send = 23;

//for state machine 

enum MOTOR_STATES {MOTOR_INIT, GO_ONE_CELL, CHOOSE_MOVE, TURN_REVERSE, TURN_LEFT, TURN_RIGHT,SEND_RECIEVE_DATA,ADJUST_TO_CUP } motor_state;
