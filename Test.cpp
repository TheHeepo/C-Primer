#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cassert>
#include <ctime>
#include "Sales_data.h"
//#include "Person.h"
#include "Screen.h"
#include "Window_mgr.h"
using namespace std;

//#define NDEBUG


class NoDefault {
public:
	NoDefault(int i) : num(i) {};

	int num;

};

class C {
public:
	C(NoDefault test = 0) : tes(test) {};

	NoDefault tes;
};



int main() {
#ifndef NDEBUG
	clock_t begin = clock();

	vector<C> vec(10);

	
	
	C testing1;
	NoDefault testing2(3);
	
	cout << testing1.tes.num << " " << testing2.num;

	

	
	

	/*
	Sales_data total;
	
	if (cin >> total.bookNo) {
		Sales_data trans;
		while (cin >> trans.bookNo) {
			if (total.bookNo == trans.bookNo) {
				++total.units_sold;
			} else {
				cout << "There are " << total.units_sold + 1 << " copies of "
					<< total.bookNo << endl;
				total = trans;
			}
		}
		cout << "There are " << total.units_sold + 1 << " copies of "
			<< total.bookNo << endl;
	} else {
		cerr << "You didn't enter in anything!" << endl;
	}

	*/


	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << endl << endl << endl << "Clock is: " << elapsed_secs << endl;
   	return EXIT_SUCCESS;
#endif
}





