#include "multiplexor_sub_function.h"
#include <iostream>

using namespace std;

void function::print(){
	for (unsigned int i = 0; i < value_vec.size(); ++i){
		if (value_vec[i] >= Y_0){
			cout << "y:" << value_vec[i] - Y_0 << ' ';
		}
		else if (value_vec[i] == NOT_DEF){
			cout << "ND ";
		}
		else{
			cout << "  " << value_vec[i] << ' ';
		}
	}
	cout << "      m_y:";
	if (max_y == NOT_DEF){ cout << "ND";}
	else{ cout << max_y - Y_0;}
	cout << "\n";
}
