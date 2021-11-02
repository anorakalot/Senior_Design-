int motor_1_enc_a = 13;
int motor_1_enc_b = 14;
//
//int motor_2_enc_a = 13;
//int motor_2_enc_b = 14;


int motor_driver_output_1_1 = 9;
int motor_driver_output_1_2 = 10;

int motor_driver_output_2_1 = 20;
int motor_driver_output_2_2 = 21;

int encoder_count_left = 0;
int encoder_count_right = 0;

void left_encoder_update(){
  encoder_count_left += 1;
}
void right_necoder_update(){
  encoder_count_right += 1;
}


class controller{
  
  public:
    int kp;
    int kd;
    int error;
    int set_point;
    int p_value;
    int d_value;
    int previous_error;

    //default constructor
    controller(){
      kp = 1;
      kd = 1;
      error = 0;
      set_point = 100;
      previous_error = 0;
      
    }
    int update_robot(int current_value){
      error = set_point - current_value;
      p_value = kp * error;
      d_value = kd * (error - previous_error);
      previous_error = error;
    }

    void set_kp(int input_kp){
      kp = input_kp;
    }
    
    void set_kd(int input_kd){
      kd = input_kd;
    }

    void set_set_point(int input_set_point){
      set_point = input_set_point;
    }
    
};




void setup() {
  controller motor_1;
  controller motor_2;
  
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  encoder_count_left = 0;
  pinMode(motor_driver_output_1_1,OUTPUT);
 
  pinMode(motor_driver_output_1_2,OUTPUT);

  pinMode(motor_driver_output_2_1,OUTPUT);

  pinMode(motor_driver_output_2_2,OUTPUT);

  attachInterrupt(digitalPinToInterrupt(motor_1_enc_a),left_encoder_update,CHANGE);
  attachInterrupt(digitalPinToInterrupt(motor_1_enc_b),left_encoder_update,CHANGE);
  
}

void forward(){
  digitalWrite(motor_driver_output_1_1,HIGH);
  digitalWrite(motor_driver_output_1_2,LOW);
}


void reverse(){
  digitalWrite(motor_driver_output_1_1,HIGH);
  digitalWrite(motor_driver_output_1_2,LOW);
  
}
void halt(){
  digitalWrite(motor_driver_output_1_1,LOW);
  digitalWrite(motor_driver_output_1_2,LOW);
}
void loop() {
  // put your main code here, to run repeatedly:
  forward();
  delay(2000);
  halt();
  delay(2000);
}
