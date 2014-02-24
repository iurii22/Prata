// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
using std::endl;
#include "Header.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
	pounds = lbs;
}


Stonewt::Stonewt()          // default constructor, wt = 0
{
	pounds = 0;
}

Stonewt::~Stonewt()         // destructor
{
}

void Stonewt::show_lbs() 
{
	cout << pounds;
}


bool Stonewt::operator>(const Stonewt & b)const
{
	return (pounds > b.pounds );
}


std::ostream & operator<<(std::ostream & os, const Stonewt & v)
{
	os << v.pounds << endl;
	return os;
}

/*
 std::istream & operator>>(std::istream & is, const Stonewt & v)
{
	is >> v.pounds;
	return is;
}
*/

bool Stonewt::operator<(const Stonewt & b)const
{
	return (pounds < b.pounds);
}

bool Stonewt::operator>=(const Stonewt & b)const
{
	return (pounds >= b.pounds);
}


bool Stonewt::operator<=(const Stonewt & b)const
{
	return (pounds <= b.pounds);
}

bool Stonewt::operator!=(const Stonewt & b)const
{
	return (pounds != b.pounds);
}


bool Stonewt::operator==(const Stonewt & b)const
{
	return (pounds == b.pounds);
}
