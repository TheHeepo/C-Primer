#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::istream;
using std::ostream;


class Sales_data {
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend istream &read(istream &is, Sales_data &item);
	friend ostream &print(ostream &os, const Sales_data &item);


public:
	Sales_data(const string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n) { cout << "First constructor used"; }
	Sales_data() : Sales_data("", 0, 0) { cout << "Second constructor used"; }
	explicit Sales_data(istream &is) : Sales_data() { read(is, *this); cout << "Third constructor used"; }
	Sales_data(const string &s) : Sales_data(s, 0, 0) { cout << "Fourth constructor used"; };

	string isbn() const { return bookNo; };
	Sales_data &combine(const Sales_data&);
	
private:
	double avg_price() const 
		{ return units_sold ? revenue / units_sold : 0; };
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};