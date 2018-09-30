//class implements functions of n "x" variables and 2^n "y" variables like functions
//of only "x" variables. The items of the value vector can be "0", "1", "NOT_DEF", "y_"(Y_0 + y_number).
//the number of each y is always depends from the first occurrence.
//pair of different y_ means any possible pair of y's in function.
//example: {0, 1, NOT_DEF, 0, y0, y1, y0, y2}
#ifndef __multiplexor_sub_function_
#define __multiplexor_sub_function_

#include <vector>

#define NOT_DEF 2
#define Y_0 3

class function{
	int func_size; //lenght of value vector 
	int max_y; //maximum of y in value vector
	std::vector <int> value_vec;
	//void normalization();
public:
	//1st arg: number of 'x' variables;
	//2nd arg: define function whith deep = 0 like "x1"(1), "x2"(2) or "y0"(0); 
	function(unsigned int number_of_x, unsigned int x_i = 0);
	void print();
	/*bool check(unsigned int yn);
	const func operator & (const func &f2);
	const func operator | (const func &f2);
	const func operator ! ();
	const bool operator == (const func &f2);
	const bool operator >= (const func &f2);
	bool any_n();
	bool windows(int num_of_val, int val);*/
};

#endif
