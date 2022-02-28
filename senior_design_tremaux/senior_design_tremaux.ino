#include <StackArray.h>
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

//class stack{
//  public:
//    stack coord_stack[100];
//
//
//    void push(){
//      
//    }
//}
//stack checks;

StackArray <coord> checks;

char misc_print_1[200];
char misc_print_2[200];

coord neighbors [4];
coord * neighbors_func(coord current){
  //coord neighbors [4]; 
  neighbors[0].y = 0;
  neighbors[0].x = -1;
  
  neighbors[1].y = -1;
  neighbors[1].x = 0;
  
  neighbors[2].y = 0;
  neighbors[2].x = 1;
  
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
void setup() {
  
  //start_pos.x = 0;
  //start_pos.y = 4;
  start_pos.y = 4;
  start_pos.x = 0;
  
  //goal.x = 4;
  //goal.y = 4;
  goal.y = 0;
  goal.x = 4;
  Serial.begin(9600);
  Serial.println("BEFORE_DELAY");
  delay(2000);
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
   Serial.println("Maze");
   for (int y = 0; y < 5 ; y++){
    for (int x = 0; x < 5; x++){
      snprintf(misc_print_1,sizeof(misc_print_1), "[%i][%i] ",maze[y][x].y,maze[y][x].x);
      Serial.print(misc_print_1);
    }
    Serial.println();
  }

   delay(5000);
 

   Serial.println("Visited_num at beginning");
   for (int y = 0; y < 5 ; y++){
    for (int x = 0; x < 5; x++){
    
    snprintf(misc_print_1,sizeof(misc_print_1), "%i ",maze[y][x].visited_num);
    Serial.print(misc_print_1);
    }
    
    Serial.println();
   
   }

  
  //PUT IN TEST OBSTACLES
  Serial.println("PUTTING IN OBSTACLES");
  maze[0][3].is_accesible_bool = 0;
  maze[1][3].is_accesible_bool = 0;
  maze[2][3].is_accesible_bool = 0;
  
   

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

  snprintf(misc_print_1,sizeof(misc_print_1), "start_pos.y %i, start_pos.x  %i, goal.y %i , goal.x %i ,start_pos visited_num:%i \n",
  start_pos.y,start_pos.x
  ,goal.y, goal.x,maze[start_pos.y][start_pos.x].visited_num);
  Serial.print(misc_print_1);

} 
  
//past_cost_dict = {};

//start value should be current position //move in advance 

//[-1,0],[0,-1],[1,0],[0,1]
//  neighbors[0].x = -1;
//  neighbors[0].y = 0;
//  
//  neighbors[1].x = 0;
//  neighbors[1].y = -1;
//
//  neighbors[2].x = 1;
//  neighbors[2].y = 0;
//
//  neighbors[3].x = 0;
//  neighbors[3].y = 1;

  //neighbors in y x format 
  
//  [0,-1],[-1,0],[0,1],[1,0]
//coord cellCheck;

void loop() {
 snprintf(misc_print_1,sizeof(misc_print_1), "start_pos.y %i, start_pos.x  %i, goal.y %i , goal.x %i ,start_pos visited_num:%i \n",
  start_pos.y,start_pos.x
  ,goal.y, goal.x,maze[start_pos.y][start_pos.x].visited_num);
  Serial.print(misc_print_1);

  while((start_pos.x != goal.x) || (start_pos.y != goal.y)){//this doesn't matter since it still correctly stops at location
      candidates = neighbors_func(maze[start_pos.y][start_pos.x]);
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
          //gonna chang ldru to lurd (since up and down are different since going up is -1 to the y value
          if (i == 0){
           direction_val =  'l';
          }
          else if (i == 1){
            direction_val = 'u';
          }
          else if (i == 2){
            direction_val = 'r';
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
           direction_val =  'l';
          }
          else if (i == 1){
            direction_val = 'u';
          }
          else if (i == 2){
            direction_val = 'r';
          }
          else if (i == 3){
            direction_val = 'd';  
          }
        
        }//end of if min_value < maze_candidates[i].x   
        
  
      }//end of for loop neighbors
        
       start_pos = move_to;
        //only add this to it
       maze[start_pos.y][start_pos.x].visited_num += 1;
       Serial.println("Visited_num at this point");
       
       for (int y = 0; y < 5 ; y++){
        for (int x = 0; x < 5; x++){
       
          snprintf(misc_print_1,sizeof(misc_print_1), "%i ",maze[y][x].visited_num);
          Serial.print(misc_print_1);
        }
       
        Serial.println();
       
       }
      
        
       snprintf(misc_print_1,sizeof(misc_print_1), "[%i],[%i], direction: %c\n ",start_pos.y,start_pos.x,direction_val);
       Serial.print(misc_print_1);
  
       delay(1000);
    
    }//end of while start != goal 
    Serial.println("REACHED_GOAL");
    delay(10000);
  
    
  }//end of void loop 
  
  
//reverse path is the actual path that is used since it's from start to goal instead of goal to start
