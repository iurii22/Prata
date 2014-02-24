#include "Header.h"
#include <iostream>

int main()
{
	Move one = Move(5, 8);
	Move two = Move(1, 3);
	Move three;

	one.showmove();
	three = one.add(two);
	three.showmove();
	
	one.reset();
	one.showmove();
	std::cin.get();
}