#include <iostream>
#ifndef COMPLEX0_H_
#define COMPLEX0_H_
class complex
{
private:

	double A, B;

public:

	complex();                   
	~complex();
	complex(double real, double image);
	complex operator+(complex & f) const;
	complex operator-(complex & f) const;
	complex operator*(complex & f) const;
	complex operator~() const;

	complex operator*(double n) const;


	friend std::ostream & operator<<(std::ostream & os, const complex & f);
	friend std::istream & operator>>(std::istream & is, complex & f);
	friend complex operator*(double n, const complex &f);

};
#endif



