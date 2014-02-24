// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "Header.h"

Stonewt::Stonewt()          // default constructor
{
	stone = 0;
	pounds = 0;
	mode = Stonewt::Mode::STONE_INT; // Stones by default
	
}

Stonewt::~Stonewt()         // destructor
{}
      
Stonewt::Stonewt(int lbs, Mode form)
{
	mode = form;					
	if ((form == STONE_INT))
	{
		stone = lbs / Lbs_per_stn;
	}

	else if (form == POUNDS_INT)
	{
		pounds = lbs;
	}

	else if (form == POUNDS_DOUBLE)
	{
		pounds = double(lbs);
	}

	else {
			cout << " Error! There is no mode, like that \n";
			mode = STONE_INT;
		 }

}

Stonewt::Stonewt(double lbs, Mode form)
{
	mode = form;					
	if (form == STONE_INT)
	{
		stone = lbs/Lbs_per_stn;
		
	}

	else if (form == POUNDS_INT)
	{
		pounds = int(lbs);
	}

	else if (form == POUNDS_DOUBLE)
	{
		pounds = lbs;
	}

	else {
			cout << " There is no mode, like that \n";
			mode = STONE_INT;
		 }
}

Stonewt Stonewt::operator+(const Stonewt & f) const
{
	Stonewt sum;
	
	if (f.mode == Stonewt::Mode::STONE_INT)

	{
		sum.stone = (stone + f.stone);
		return sum;
	}

	else
	{
		sum.pounds = (pounds + f.pounds);
		return sum;
	}
}


Stonewt Stonewt::operator-(const Stonewt & f) const
{
	Stonewt div;

	if (f.mode == Stonewt::Mode::STONE_INT)

	{
		div.stone = (stone - f.stone);
		return div;
	}

	else
	{
		div.pounds = (pounds - f.pounds);
		return div;
	}
}

Stonewt Stonewt::operator*(double n) const
{
	Stonewt mul;
	if (mode == Stonewt::Mode::STONE_INT)

	{
		mul.stone = (n * stone );
		return mul;
	}

	else
	{
		mul.pounds = (n* pounds);
		return mul;
	}

}


// show weight in pounds or in stones
std::ostream & operator <<(std::ostream & os, const Stonewt & c)
{
	if (c.mode == Stonewt::Mode::STONE_INT)

		os << c.stone << " stones\n";

	else
		os << c.pounds << " pounds\n";
	
	return os;
}


Stonewt operator*(double n, const Stonewt & g)
{
	return g * n;

}
