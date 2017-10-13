#include "Person.h"
#include <string>
using namespace std;


string Person::getName() const {
	return name;
}

string Person::getAddress() const {
	return address;
}




istream &read(istream &is, Person &thisPerson);
ostream &print(ostream &os, const Person &thisPerson);

istream &read(istream &is, Person &thisPerson) {
	is >> thisPerson.name >> thisPerson.address;
	return is;

}

ostream &print(ostream &os, const Person &thisPerson) {
	os << thisPerson.name << " " << thisPerson.address;
	return os;

}


Person::Person(istream &is) {
	read(is, *this);
}

