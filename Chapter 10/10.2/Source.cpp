#include "Header.h"
#include <iostream>
#include <string>



using std::strcpy;
using std::cout;
using std::endl;

Person::Person(const string & ln, const char * fn)
{
	lname = ln;

	strcpy_s(fname, fn);
}

void Person::Show() const
{
	cout << "First name : " << fname << "  Surname : " << lname << endl << endl;
}

void Person::FormalShow() const
{
	cout << "Surname : " << lname << "   First name : " << fname << endl;
}

Person::~Person()
{
	cout << "bye " << fname;
}
