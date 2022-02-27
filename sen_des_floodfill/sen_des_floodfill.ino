
struct coord{
  int x;
  int y;
  int cost;
  int accesible_bool; 
};

coord * candidates;
//set up goal
coord start_pos;

//MIGHT USE THIS VARIABLE
coord curr_pos;
 
coord goal;



char misc_print_1[200];
char misc_print_2[200];

coord neighbors [4];
coord * neighbors_func(coord current){
  //coord neighbors [4]; 
  neighbors[0].x = -1;
  neighbors[0].y = 0;
  
  neighbors[1].x = 0;
  neighbors[1].y = -1;

  neighbors[2].x = 1;
  neighbors[2].y = 0;

  neighbors[3].x = 0;
  neighbors[3].y = 1;

  for (int i = 0; i < 4; i++){
    neighbors[i].x = neighbors[i].x + current.x;
    neighbors[i].y = neighbors[i].y + current.y;
  }

 return neighbors;
}

int manhattan_distance_func(coord candidate, coord goal){

  int distance = (abs( candidate.x - goal.x )+abs(candidate.y - goal.y));
  return distance;

}

coord maze[5][5];


void setup() {
  start_pos.x = 0;
  start_pos.y = 0;

  goal.x = 4;
  goal.y = 4;
  Serial.begin(9600);
  Serial.println("BEFORE_DELAY");
  delay(5000);
 candidates = neighbors_func(start_pos);
 Serial.println("Neighbors");
  for (int i = 0; i < 4; i ++){
    snprintf(misc_print_1,sizeof(misc_print_1), "[%i],[%i]\n",candidates[i].x,candidates[i].y);
    Serial.println(misc_print_1);
  }


   for (int y = 0; y < 5 ; y++){
    for (int x = 0; x < 5; x++){
      maze[y][x].x = x;
      maze[y][x].y = y;
    }
   }
   Serial.println("Maze");
   for (int y = 0; y < 5 ; y++){
    for (int x = 0; x < 5; x++){
    snprintf(misc_print_1,sizeof(misc_print_1), "[%i][%i] ",maze[y][x].x,maze[y][x].y);
    Serial.print(misc_print_1);
    }
    Serial.println();
   
   }
//
//   Serial.println("Cost at beginning");
//   for (int y = 0; y < 5 ; y++){
//    for (int x = 0; x < 5; x++){
//    snprintf(misc_print_1,sizeof(misc_print_1), "[%i][%i] ",maze[y][x].x,maze[y][x].y);
//    Serial.print(misc_print_1);
//    }
//    Serial.println();
//   
//   }

//  
//  for(int y = 0; y< 5; x ++){
//    for ( int x = 0; x < 5; y++){
//        maze[y][x] = manhattan_distance_func(
//    }
//  }
  
 
} 
  
//past_cost_dict = {};


void loop() {
 
    
  }//end of void loop 
 

//reverse path is the actual path that is used since it's from start to goal instead of goal to start
