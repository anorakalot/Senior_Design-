
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
  digitalWrite(motor_driver_output_1_2,LOW);

  analogWrite(motor_driver_output_2_1,speed_value_r);
  digitalWrite(motor_driver_output_2_2,LOW);

}

void reverse(){
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_driver_output_1_1,LOW);
  digitalWrite(motor_driver_output_1_2,HIGH);
  digitalWrite(motor_driver_output_2_1,LOW);
  digitalWrite(motor_driver_output_2_2,HIGH);
}


void left_turn(){
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_driver_output_1_1,LOW);
  digitalWrite(motor_driver_output_1_2,HIGH);

  digitalWrite(motor_driver_output_2_1,HIGH);
  digitalWrite(motor_driver_output_2_2,LOW);

//  analogWrite(motor_driver_output_1_1,0);
//  analogWrite(motor_driver_output_1_2,255);
//
//  analogWrite(motor_driver_output_2_1,255);
//  analogWrite(motor_driver_output_2_2,0);

}

void right_turn(){
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_1_enable,HIGH);
  digitalWrite(motor_driver_output_1_1,HIGH);
  digitalWrite(motor_driver_output_1_2,LOW);

  digitalWrite(motor_driver_output_2_1,LOW);
  digitalWrite(motor_driver_output_2_2,HIGH);
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

    
  analogWrite(motor_driver_output_1_1,0);
  digitalWrite(motor_driver_output_1_2,LOW);

  analogWrite(motor_driver_output_2_1,0);
  digitalWrite(motor_driver_output_2_2,LOW);
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


//nned to make function if given path go through said path


//just use this coord for testing before fully integratin a star search into proto 5 
struct coord{
  int x;
  int y;
  int cost;
};

coord reverse_path[100];


int reverse_path_index;

void motor_init(){
  motor_state = MOTOR_INIT;
}

int direction_robot= 1;
//1 = forward, 



void motor_tick(){

  switch (motor_state) { //transitions
    case MOTOR_INIT:
      //motor_state = GO_ONE_CELL;
      motor_state = CHOOSE_MOVE;
      break;
    case CHOOSE_MOVE:
      reverse_path[reverse_path_index];
      
      break;
    default:
      motor_state = GO_ONE_CELL;
      break;
  }
  switch (motor_state) { //actions
    case MOTOR_INIT:
      break;

    case CHOOSE_MOVE:
      break;


     
    
      


  }
  
}
