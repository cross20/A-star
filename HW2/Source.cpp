//
//A* Search Algorithm
//Chad Ross and Tim Bruggeman
//AI, Homework 2
//Edited on: 02/20/2018
//


#include <iostream>
#include<queue>

#include "Cost.h"

using std::cout;
using std::cin;
using std::endl;
using std::queue;

queue<int> path(int start, int finish);
//NOTE: Start at 0 for Tim, 1 for Ice Cream, 2 for Car Park, etc. (based on excell spreadsheet)

int main() {
    int start = 0, finish = 1;
    
    cout << "Hello! Please enter starting location: ";
    cin >> start;
    
    cout << "Now, please enter your final location: ";
    cin >> finish;
    
    path(start, finish);
    
    return 0;
}

//recursive function

//takes start and finish
//Check which nodes are good to take
//Use queues
//Check each node for heuristic cost, go to lowest
//repeat until final node reached, then return queue

//NOTE: Start at 0 for Tim, 1 for Ice Cream, 2 for Car Park, etc. (based on excell spreadsheet)
queue<int> path(int start, int finish) {
    
    if (start < 0 || finish > 15 || start == finish) { //Check to see if number entry is valid
        cout << "Invalid entry. Enter numbers between 0 and 15." << endl;
        
        cout << "START: ";
        cin >> start;
        
        cout << "FINISH: ";
        cin >> finish;
        
        path(start, finish);
    }
    
    queue<int> intersection; //Stores nodes which are all potential paths to the goal
    queue<int> map; //Stores nodes which have been declared to be part of the best path
    
    Cost node;
    node.get_heuristic_cost(start, finish);
    
    return map;
}
