
struct coord{
  int x;
  int y;
  //int cost;
  int is_accesible_bool; //1 means it is accessible 0 means it's a bool
  int visited_num;
};
//
//struct just_coord{
//  
//}
int min_value = 0;

coord * candidates;

//set up goal
coord start_pos;

//MIGHT USE THIS VARIABLE
coord curr_pos;
 
coord goal;

//up //right // left //down
//[-1,0],[0,1],[0,-1],[1,0]

coord neighbors [4];
coord * neighbors_func(coord current){
  //coord neighbors [4]; 
  
  neighbors[0].y = -1;
  neighbors[0].x = 0;

  neighbors[1].y = 0;
  neighbors[1].x = 1;

  neighbors[2].y = 0;
  neighbors[2].x = -1;
  
  
  
  neighbors[3].y = 1;
  neighbors[3].x = 0;
  
  for (int i = 0; i < 4; i++){
    neighbors[i].y = neighbors[i].y + current.y;
    neighbors[i].x = neighbors[i].x + current.x;
 
  }

 return neighbors;
}

int manhattan_distance_func(coord candidate, coord goal){

  int distance = (abs( candidate.x - goal.x )+abs(candidate.y - goal.y));
  return distance;

}
 
char direction_val;
 
coord move_to;
coord maze[5][5];


coord path[100];
//queue;

coord pop_value;

int at_goal_bool=0;

int detect_obstacle_bool_middle=0; 
int detect_obstacle_bool_left = 0;
int detect_obstacle_bool_right = 0;

unsigned long detect_range = 600;//600,500

void treamux_func() {
 snprintf(misc_print_1,sizeof(misc_print_1), "start_pos.y %i, start_pos.x  %i, goal.y %i , goal.x %i ,start_pos visited_num:%i \n",
  start_pos.y,start_pos.x
  ,goal.y, goal.x,maze[start_pos.y][start_pos.x].visited_num);
  Serial.print(misc_print_1);

  //while((start_pos.x != goal.x) || (start_pos.y != goal.y)){//this doesn't matter since it still correctly stops at location
//up //right // left //down
//[-1,0],[0,1],[0,-1],[1,0]

  if ((start_pos.x != goal.x) || (start_pos.y != goal.y)){
      candidates = neighbors_func(maze[start_pos.y][start_pos.x]);

//      for(int x = 0; x < 4 ; x++){
//        seria
//      }
       snprintf(misc_print_1,sizeof(misc_print_1), "[%i],[%i], direction: %c\n ",start_pos.y,start_pos.x,current_motor_dir_val);
        //Serial.print(misc_print_1);
       
       //ERROR IS SOMEWHERE HERE IN SONAR ACESSIBLE CODE 
        //FOUND ERROR IT WAS JUST RIGHT IF WAS SET TO = INSTEAD OF ==

         
       //do sonar detection here 
       //need to reset them before each one 
      detect_obstacle_bool_middle=0; 
      detect_obstacle_bool_left = 0;
      detect_obstacle_bool_right = 0;
      
      
      
      for (int u = 0; u < 10; u++){//5 times prone to error 
           get_sonar_dist(); 
           if (dist_val_middle < detect_range){
            detect_obstacle_bool_middle = 1;
           }
           if (dist_val_left < detect_range){
            detect_obstacle_bool_left = 1;
           }
           if (dist_val_right < detect_range){
            detect_obstacle_bool_right = 1;
           }//got rid of t his until right sensor is fixed 
       }//end of


       if (detect_obstacle_bool_middle ==1){
        //Serial.println("OBSTACEL MIDDLE DETECT");
        //delay(500);
       }
       
      if (detect_obstacle_bool_right ==1){
        //Serial.println("OBSTACEL RIGHT DETECT");
        //delay(500);
       }

      if (detect_obstacle_bool_left == 1){
        //Serial.println("obstacle left detect");
        //delay(500);
      }
      
 //up //right // left //down
//[-1,0],[0,1],[0,-1],[1,0]
              
          //DONE CONDITIONS
        if (current_motor_dir_val == 'u'){
           if (detect_obstacle_bool_middle ==1){
            maze[candidates[0].y][candidates[0].x].is_accesible_bool = 0; 
           
           }
           
           if (detect_obstacle_bool_left==1){
            maze[candidates[2].y][candidates[2].x].is_accesible_bool = 0; 
           }
            
           if (detect_obstacle_bool_right ==1){
            maze[candidates[1].y][candidates[1].x].is_accesible_bool = 0; 
           }
           
           }//end  of U

        //DONE CONDITIONS

//up //right // left //down
//[-1,0],[0,1],[0,-1],[1,0]
        
        else if (current_motor_dir_val == 'r'){
           if (detect_obstacle_bool_middle ==1){
            maze[candidates[1].y][candidates[1].x].is_accesible_bool = 0; 
           }
           
           if (detect_obstacle_bool_left==1) {
            maze[candidates[0].y][candidates[0].x].is_accesible_bool = 0; 
           }
           if (detect_obstacle_bool_right ==1){
            maze[candidates[3].y][candidates[3].x].is_accesible_bool = 0; 
           }
          
        }
//up //right // left //down
//[-1,0],[0,1],[0,-1],[1,0]
        
        else if (current_motor_dir_val == 'd'){
           if (detect_obstacle_bool_middle ==1){
            maze[candidates[3].y][candidates[3].x].is_accesible_bool = 0; 
           }
           
           if (detect_obstacle_bool_left==1) {
            maze[candidates[1].y][candidates[1].x].is_accesible_bool = 0; 
           }
           
           if (detect_obstacle_bool_right ==1){
            maze[candidates[2].y][candidates[2].x].is_accesible_bool = 0; 
           }
          
            
        }

//up //right // left //down
//[-1,0],[0,1],[0,-1],[1,0]
           
        
        else if (current_motor_dir_val == 'l'){
            if (detect_obstacle_bool_middle ==1){
            maze[candidates[2].y][candidates[2].x].is_accesible_bool = 0; 
            }
           
           if (detect_obstacle_bool_left==1) {
            maze[candidates[3].y][candidates[3].x].is_accesible_bool = 0; 
           }
           
           if (detect_obstacle_bool_right==1){
            maze[candidates[0].y][candidates[0].x].is_accesible_bool = 0; 
           }
          
          
        }
        //end of ALL SENSE ACCESIBLITY THROUGH SONAR

        //ERROR IS SOMEWHERE HERE   ABOVE IN SONAR ACESSIBLE CODE     

        // FOUND ERROR ABOVE IT WAS JUST = instead of ==

      //PATHFINDING HAS ISSUE WHERE IT DOESN"T JUST GO TO zero when going need to go in no obstacles 
      //CHECK TO SEE IF THIS ISSUE IS HERE 
      //ACTUALLY ERROR NOT HERE SINCE WITHOUT SONAR IT WORKED WELL WITH NO OBSTACLES 
      
        //candidates = neighbors_func(maze[start_pos.y][start_pos.x]);
      min_value = -100;
      for (int i = 0; i < 4; i ++){
        if (candidates[i].x < 0 || candidates[i].y < 0 || candidates[i].x > 4|| candidates[i].y > 4){
          //NOTHING
          //if it's less than zero it's not a valid 
          continue;//go to next for loop iteration  
        } 
        else if (maze[candidates[i].y][candidates[i].x].is_accesible_bool == 0){
          continue;//if it's an obstacle skip over it
        }
        
        else if (min_value == -100){
          min_value = maze[candidates[i].y][candidates[i].x].visited_num;
          //up //right // left //down
//[-1,0],[0,1],[0,-1],[1,0]
          if (i == 0){
           direction_val =  'u';
          }
          else if (i == 1){
            direction_val = 'r';
          }
          else if (i == 2){
            direction_val = 'l';
          }
          else if (i == 3){
            direction_val = 'd';
          }
          move_to = candidates[i];
        }
        
        else if ( maze[candidates[i].y][candidates[i].x].visited_num < min_value ){
          move_to = candidates[i];
          min_value = maze[candidates[i].y][candidates[i].x].visited_num;
          if (i == 0){
           direction_val =  'u';
          }
          else if (i == 1){
            direction_val = 'r';
          }
          else if (i == 2){
            direction_val = 'l';
          }
          else if (i == 3){
            direction_val = 'd';  
          }
        
        }//end of if min_value < maze_candidates[i].x   
        
  
      }//end of for loop neighbors
        
       start_pos = move_to;
        //only add this to it
       maze[start_pos.y][start_pos.x].visited_num += 1;
       //Serial.println("Visited_num at this point");
       
       for (int y = 0; y < 5 ; y++){
        for (int x = 0; x < 5; x++){
        
          snprintf(misc_print_1,sizeof(misc_print_1), "%i ",maze[y][x].visited_num);
          //Serial.print(misc_print_1);
        }
        
        //Serial.println();
        
       }
      
        
       snprintf(misc_print_1,sizeof(misc_print_1), "[%i],[%i], direction: %c\n ",start_pos.y,start_pos.x,direction_val);
       //Serial.print(misc_print_1);
  
       //delay(1000);
    

  }


      else if ((start_pos.x == goal.x) && (start_pos.y== goal.y)){
        at_goal_bool = 1;
        //Serial.println("AT_GOAL");
      }
    
  }//end of treamux func 
  
 
