#include "multiplexor_sub_function.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char * argv[]) {
	try{
		int n;
		if (argc >= 2){ n = atoi(argv[1]);}
		else {n = 5;}
		function y(n);
		y.print();
		for (int i = 1; i <= n; ++i){
			function f(n,i);
			f.print();
		}
	}
	catch(const char* c){
		cout << c << "\n";
		return 1;
	}
}
