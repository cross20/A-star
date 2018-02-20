#pragma once

class Cost {
private:
	int cost_array[16][16] = { // for all zero values, the nodes are not directly connected or the nodes are the same node
		0,0,14,0,14,0,0,0,0,0,0,0,0,0,0,0,
		28,0,16,7,0,0,0,0,0,0,0,0,0,0,0,0,
		14,16,0,9,0,0,0,0,0,0,0,0,0,0,0,0,
		24,7,9,0,0,7,11,0,0,0,0,0,0,0,0,0,
		14,30,12,20,0,0,12,0,0,0,0,0,0,0,0,0,
		32,16,17,7,27,0,0,0,5,0,0,0,0,0,0,0,
		24,23,12,11,12,11,0,2,0,0,13,0,0,0,0,0,
		28,26,16,14,14,12,2,0,13,0,0,16,0,0,0,0,
		38,23,23,14,27,5,12,13,0,0,0,0,16,0,0,0,
		32,45,30,34,17,33,20,20,32,0,10,0,0,12,0,0,
		35,39,27,28,19,24,13,12,22,10,0,6,0,0,0,0,
		42,42,32,31,26,25,17,16,21,16,6,0,13,18,8,0,
		50,40,37,31,36,23,22,21,16,30,19,13,0,0,8,6,
		46,57,43,46,32,43,31,30,40,12,17,18,32,0,0,0,
		51,47,40,36,35,29,24,23,24,25,15,8,8,24,0,0,
		57,47,44,38,42,29,29,28,23,25,24,17,6,34,8,0 };

public:
	// returns the estimated cost from a to be (direction does not matter)
	int get_estimated_cost(int a, int b) {
		if (a >= b)
			return cost_array[a][b];
		else
			return cost_array[b][a];
	}
	// returns the actual cost from a to b (direction does not matter) (will be zero if the nodes are not directly connected or the nodes are the same node)
	int get_real_cost(int a, int b) {
		if (a <= b)
			return cost_array[a][b];
		else
			return cost_array[b][a];
	}
    // returns the sum of estimate cost and actual cost
    int get_heuristic_cost(int a, int b) {
        int estimate = get_estimated_cost(a,b);
        int actual = get_real_cost(a,b);
        
        return actual + estimate;
    }
};
