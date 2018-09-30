#include "multiplexor_sub_function.h"

function::function(unsigned int number_of_x, unsigned int x_i){
	if (x_i > number_of_x){throw("second argument of function > max x!");}
	func_size = 1 << number_of_x;
	if (x_i == 0){
		max_y = Y_0;
		for (int i = 0; i < func_size; ++i){
			value_vec.push_back(Y_0);
		}
	}
	else{
		max_y = NOT_DEF;
		int step = func_size >> x_i;
		for (int i = 0; i < func_size; ++i){
			//integer part from division is not even
			value_vec.push_back( i / step % 2 != 0);
		}
	}
}
