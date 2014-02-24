#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	Person one; // use default constructor
	
	Person two("Tereschenko"); // use #2 with one default argument

	Person three = Person("Dimwiddy", "Sam");    // use #2, no defaults
	//one.Show();
	//one.FormalShow();

	two.Show();
	two.FormalShow();

	three.Show();
	
	three.FormalShow();

	cin.get();
	return 0;
	
}
