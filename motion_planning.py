#!/usr/bin/env python
from math import sqrt

def neighbors(current):
    # define the list of 4 neighbors
    #neighbors = [(-1,0),(0,-1), (1,0), (0,1)]
    neighbors = [[-1,0],[0,-1], [1,0], [0,1]]
    print("current in neighbors: ",current)
    return [(current[0]+nbr[0], current[1]+nbr[1]) for nbr in neighbors ]
    #return [ [current[0]+nbr[0], current[1]+nbr[1]] for nbr in neighbors ]

def heuristic_distance(candidate, goal):

    distance = sqrt((goal[0] - candidate[0])**2 + (goal[1] - candidate[1])**2)
    return distance
    #pass

#I got the diviontary question right in class!
def get_path_from_A_star(start, goal, obstacles):
    # input  start: integer 2-tuple of the current grid, e.g., (0, 0)
    #        goal: integer 2-tuple  of the goal grid, e.g., (5, 1)
    #        obstacles: a list of grids marked as obstacles, e.g., [(2, -1), (2, 0), ...]
    # output path: a list of grids connecting start to goal, e.g., [(1, 0), (1, 1), ...]
    #   note that the path should contain the goal but not the start
    #   e.g., the path from (0, 0) to (2, 2) should be [(1, 0), (1, 1), (2, 1), (2, 2)] 
    
    
    
    
    # open_val = 1 
    # past_case[0] = 
    # while (open_val != 0):
    #     current = open_va
    #means first element has to be assigned to open
# def get_first(elem):
#     return elem[0]

#dictionary is list of locations and it's cost
#link cadidates with cost make dictionary cand_cost={((6,5):4), ((5,6):10)}
#cand_cost[(6,5)] => 4  
#need to store the costs with the 
#open_list => nodes to explore
#closed_list => nodes have explored
#past_cost => cost of explored nodes


#for the dictionary there is no indexes, dict: past_cost = {}
#past_cost[start] = 0 

#open is unexplored locations 
#closed is explored locations

#line 1
# OPEN <= {1} means open initialized with first valu
#line 2
# intialize an empty list/array/Dict 
# assign 0 to the first element
    open_list = [] 
    open_list.append((0,start)) #zero and start is a tuple (has 0 cast and, tuple of 
    #start_pos)
    
    # past_cost = []
    # past_cost.append(0)
    


    past_cost_dict = {}
    past_cost_dict[start] = 0
    closed_list = []
    parent_dict = {} 
    #in dictionary this value ___ : ____ left is called right is to be assigned
    
    #need to check this beforeeverything 
    if goal in obstacles:
        return []

    #while(len(open_list) > 0):
    while (open_list):


    #parent_list
        #open_list.sort()

        #current pops list at index 0 and accesses the tuple 
        #of the position
        current = open_list.pop(0)[1]

        #add current to closed list
        closed_list.append(current)
        #if current is at goal 
        if current == goal:
            break
        
        print ("neighbors", neighbors(current))
        #goes into neighbors function and has candidate for each neighbors 
        #output from function
        for candidate in neighbors(current):
            #check if candidate is in obstacles
            if candidate in obstacles:
                continue
            #if candidate not in closed_list:
            if candidate in closed_list:
                continue 

            new_cost = past_cost_dict[current] + 1
            

            if candidate not in past_cost_dict or new_cost < past_cost_dict[candidate]:#if new cost < current candidate 

                past_cost_dict[candidate] = new_cost 
                parent_dict[candidate] = current
                est_total_cost = past_cost_dict[candidate] + heuristic_distance(candidate,goal)
                open_list.append((est_total_cost,candidate))
        
        open_list.sort()            

    print("parent",parent_dict) 
    path = [] 

    while (current != start):
        path.append(current)
        current = parent_dict[current]

    #closed_list = []
    #path_cost
    ##print("path",path)
    path.reverse()
    print("path: ",path)
    return path

#INITALIZE lists/Dicts
#check if goal is in obstacles (use raise function to help bring up errors)#
#can also do while open_list: or also use (len(open_list) > 0)

#trajectory has 2 main condidiont goal is not obstacle,neighboars not 
#obstacle


# if __name__ == '__main__':
#     start = (0, 0) # this is a tuple data structure in Python initialized with 2 integers
#     goal = (-5, -2)
#     obstacles = [(-2, 1), (-2, 0), (-2, -1), (-2, -2), (-4, -2), (-4, -3)]
#     path = get_path_from_A_star(start, goal, obstacles)
#     print(path)

    