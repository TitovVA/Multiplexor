//class implements functions of n "x" variables and 2^n "y" variables like functions
//of only "x" variables. The items of the value vector can be "0", "1", "NOT_DEF", "y_"(Y_0 + y_number).
//the number of each y is always depends from the first occurrence.
//pair of different y_ means any possible pair of y's in function.
//example: {0, 1, NOT_DEF, 0, y0, y1, y0, y2}

class function{
	int func_size; //lenght of value vector 
	int max_y; //
	vector <int> value_vec;
	void normalization();
public:
	func(int size, char kind = 'y', unsigned int value = 0);
	void print();
	bool check(unsigned int yn);
	const func operator & (const func &f2);
	const func operator | (const func &f2);
	const func operator ! ();
	const bool operator == (const func &f2);
	const bool operator >= (const func &f2);
	bool any_n();
	bool windows(int num_of_val, int val);
};
