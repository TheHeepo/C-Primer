#pragma once
#include <string>

using std::string;
using std::istream;
using std::ostream;

class Person {
	friend istream &read(istream &is, Person &thisPerson);
	friend ostream &print(ostream &os, const Person &thisPerson);
	
public:
	typedef string personalInfo;
	Person() = default;
	Person(const personalInfo &n) : name(n) {};
	Person(const personalInfo &n, const personalInfo &a) : name(n), address(a) {};
	explicit Person(istream &is);
	personalInfo getName() const;
	personalInfo getAddress() const;

private:
	personalInfo name = "";
	personalInfo address = "";

	

};
