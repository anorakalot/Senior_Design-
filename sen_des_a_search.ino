
struct coord{
  int x;
  int y;
  int cost;
};

struct dict{
//  int key_x;
//  int key_y;
  coord dict_key_coord;
  int dict_cost;
};

struct p_dict{
  coord child;
  coord parent;
};

coord neighbors [4]; 

coord *  candidates;

coord obstacles[100]; 
int obstacles_size = 100;//set this to whatever the obstacles size is 

dict past_cost_dict [200];
int past_cost_dict_size = 200;

int past_cost_dict_index = 0;

p_dict parent_dict [200];
int parent_dict_size = 0;
int parent_dict_index = 0;


//set up goal 
coord goal;


int est_total_cost;

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

int heuristic_distance_func(coord candidate, coord goal){

  int distance = sqrt( pow((goal.x - candidate.x), 2)+pow((goal.y - candidate.y), 2));
  return distance;

}

coord open_list[100];
int amt_in_open_list=0;
int open_list_index = 0;


coord closed_list[100];
int closed_list_size= 100;


coord current;

coord start_val;

coord path[100];

coord reverse_path[100];
int reverse_path_index = 0;

int path_size = 0;
int path_index = 0;

void setup() {
  goal.x = 3;
  goal.y = 3;
  
  
// dict["apples"] = 20;
// dict["banana"] = 50;
  // put your setup code here, to run once:
  
  //setting up openlist first index of open list to have start position 
  //open_list.append((0,start));
  start_val.x = 0;
  start_val.y = 0;
  
  open_list[0].x =0;
  open_list[0].y = 0;

  open_list[0].cost = 0;
  amt_in_open_list =1;
  open_list_index = 0;

  //NEED TO FIND A WAY TO PUT IN PAST_COST_DICT;
    
  //set up past cost_dict as a global variable

  //past_cost_dict[start] = 0
  past_cost_dict[past_cost_dict_index].dict_key_coord.x = open_list[0].x;
  past_cost_dict[past_cost_dict_index].dict_key_coord.y = open_list[0].y;
  past_cost_dict[past_cost_dict_index].dict_cost = 0;
  past_cost_dict_index += 1;//goes to next available index 
  
    
  

  // if goal in obstacles return;
  for (int i = 0; i < 200; i ++){
    if ((goal.x == obstacles[i].x) && (goal.y == obstacles[i].y)){
      return;
    }
  }

  delay(2000);
} 
  
//past_cost_dict = {};

char misc_print_1[200];

int in_obstacles=0;

int in_closed_list= 0;

int in_past_cost_dict = 0;

int new_cost;

int distance_test_val= 0;

int new_cost_less = 0;

int candidate_index_past_cost_dict = 0;

void loop() {
//
//  distance_test_val = heuristic_distance_func(start_val,goal);
//  Serial.println(distance_test_val);

  
//  // put your main code here, to run repeatedly:
//  //while(open_list.size() != 0){
  while(amt_in_open_list!=0){
    current = open_list[0];
    amt_in_open_list -= 1;

    //if current == goal
    if ((current.x == goal.x) &&(current.y == goal.y)){
      break;
    }

    
    candidates = neighbors_func(current);
    

    //for candidate in neighbors 
    for (int i = 0; i < 4; i++){//for each candidate in current
      in_obstacles = 0;
      snprintf(misc_print_1,sizeof(misc_print_1),"candidates[i].x %i, candidates[i].y %i ",candidates[i].x
      ,candidates[i].y);
       Serial.println(misc_print_1);
       Serial.println();

      //if candidate in obstacles
       for (int x = 0; x < obstacles_size; x++){
          if ((obstacles[x].x == candidates[i].x) && (obstacles[x].y == candidates[i].y)){
              in_obstacles = 1;
              break;//breaks out of this loop
          }
          
       }//end of looking throughout obstacles 
       
       if (in_obstacles ==1){
          continue;//go to next candidate in for loop
       }

       //if candidate closed_list
       for (int x = 0; x < closed_list_size; x++){
          if ((closed_list[x].x == candidates[i].x) && (closed_list[x].y == candidates[i].y)){
              in_closed_list = 1;
              break;//breaks out of this loop
          }
          
       }//end of looking throughout closed_list
       
       if (in_closed_list ==1){
          continue;//go to next candidate in for loop
       }
       
      new_cost = 0;
      //new cost = past_cost_dict[current] + 1;
      for (int x = 0; x < past_cost_dict_size; x++){
        if ((current.x == past_cost_dict[x].dict_key_coord.x) && (current.y == past_cost_dict[x].dict_key_coord.y)){
          new_cost = past_cost_dict[x].dict_cost + 1;
        }
        
      }
      
      in_past_cost_dict = 0;
      new_cost_less = 0;
      //if candidate not in past_cost_dict
      
      for (int x = 0; past_cost_dict_size; x++){
        if ((candidates[i].x == past_cost_dict[x].dict_key_coord.x) && (candidates[i].y == past_cost_dict[x].dict_key_coord.y)){
          in_past_cost_dict = 1;//means it is in past_cost_dict
          candidate_index_past_cost_dict = x;
        }
        
      }

      //new_cost < past_cost_dict[candidate]
      
      if (in_past_cost_dict ==1){//if candidate in past_cost
          if (new_cost < past_cost_dict[candidate_index_past_cost_dict].dict_cost){
            new_cost_less = 1;
          }
        
      }
//goes though the final if statement 
      if ((in_past_cost_dict == 0) || (new_cost_less == 1)){
          //gona do est_total cost differently depending on 
          //past_cost_dict bool
          if (in_past_cost_dict==1){
            past_cost_dict[candidate_index_past_cost_dict].dict_cost = new_cost;
            est_total_cost = past_cost_dict[candidate_index_past_cost_dict].dict_cost;
            est_total_cost += heuristic_distance_func(candidates[i],goal); 
          }
          else {
            past_cost_dict[past_cost_dict_index].dict_cost = new_cost;
            past_cost_dict[past_cost_dict_index].dict_key_coord = candidates[i];
            est_total_cost = past_cost_dict[past_cost_dict_index].dict_cost;
            est_total_cost += heuristic_distance_func(candidates[i],goal);

            //make sure to increase index at the end 
            past_cost_dict_index += 1;
          }

          //parent_dict[candidate] = current
          parent_dict[parent_dict_index].child = current;
          parent_dict[parent_dict_index].parent = candidates[i];
          parent_dict_index += 1;
          
          //open_list append ((est_total_cost,candidate
          open_list[open_list_index] = candidates[i];
          open_list[open_list_index].cost = est_total_cost;
          //open_list[open_list_index].cost = est_total_cost;
          open_list_index +=1;
          amt_in_open_list += 1;
          
          
          
      }
      
       

    ///////////////////////////////////////
       
    }
    Serial.println();
    Serial.println();
   
    }
    path_index = 0;
    
    while( (current.x != start_val.x) && (current.y != start_val.y)){
      path[path_index]= current;
      //current = parent[current];
      //find parent[current
      for (int x = 0; x < parent_dict_size ; x++){
           if (parent_dict[x].child.x == current.x && parent_dict[x].child.y == current.y ){
            current = parent_dict[x].parent;
           }
      }
      path_index += 1;
      path_size += 1;
      /////////////////////////////
    }


   reverse_path_index = 0;
  for (int x = path_size; x >0; x--){
    reverse_path[reverse_path_index] = path[x];
    reverse_path_index += 1;
  }



    
  }//end of void loop 
 

//reverse path is the actual path that is used since it's from start to goal instead of goal to start
