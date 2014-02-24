
// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "Header.h"

int main()
{

	Stonewt Bob(1400.6); 
	Stonewt John(440);			  
	Stonewt Petro(184);			
	Stonewt Denis(200);
	double n = 5;
	
	cout << "Our friends weighed \n";
	cout << "Bob = " << Bob << "John = " << John;
	cout << "Petro = " << Petro << "Denis = " << Denis;

	cout << Petro + Denis;
	cout << Bob - John;
	
	cout << n * Bob;
	cout << Bob * n;

	
	std::cin.get();
	return 0;
}

