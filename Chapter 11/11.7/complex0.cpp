using namespace std;
#include "complex0.h"

complex::complex()
{
	A = B = 0;
}

complex::~complex()
{
}

complex::complex(double real, double image)
{
	A = real;
	B = image;
}

complex complex::operator+(complex & f) const
{
	return complex(A + f.A, B + f.B);
}

complex complex::operator-(complex & f) const
{
	return complex(A - f.A, B - f.B);
}

complex complex::operator*(complex & f) const
{
	return complex(A * f.A - B * f.B, A * f.B + B * f.A);
}

complex complex::operator~() const
{
	return complex(A, -B);
}

complex operator*(double n, const complex &f)
{
	return complex(f.A * n, f.B * n);
}

std::ostream & operator<<(std::ostream & os, const complex & f)
{
	os << "(" << f.A << ", " << f.B << "i)";
	return os;
}

std::istream & operator>>(std::istream & is, complex & f)
{
	cout << "real : ";
	is >> f.A;
	cout << "imaginary : ";
	is >> f.B;
	return is;
}
