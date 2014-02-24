// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h" 
#include <fstream> 

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));     // seed random-number generator
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
							ofstream outFile;
							outFile.open("Vector.txt");
	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;

							outFile << "Target Distance: " << target << ", Step Size: " << dstep << endl;
							outFile << steps << ": " << result << endl;     // operator<<(outFile, result) = outFile << result

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;

			
			
			
							outFile << steps << ": " << result << endl;
			

		}

							outFile << "After " << steps << " steps, the subject "
							"has the following location:\n"	<< result << endl;

				
		cout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		cout << result << endl;

		result.polar_mode();

		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.magval() / steps << endl;

							outFile << " or\n" << result << endl << "Average outward distance per step = "
								<< result.magval() / steps << endl <<endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
			
	}

							outFile.close();
	cout << "Bye!\n";
	/* keep window open
	cin.clear();
	while (cin.get() != '\n')
	continue;
	cin.get();
	*/
	return 0;
}
