#include <iostream>
#include "Header.h"
#include <string>
using namespace std;
using std::string;

Move::Move(double a, double b )
{
	x = a;
	y = b;
	// sets x, y to a, b
}
			
void Move::showmove() const
{
	std::cout <<" X = " <<  x << "   " << "Y = " <<  y << std::endl;
}

Move Move::add(const Move & m) const
{
	Move z;
	z.x = x + m.x;
	z.y = y + m.y;
	return z;
}

// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
