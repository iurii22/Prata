#include "Header.h"
#include <cstdlib>
#include <iostream>

using namespace SALES;

int main()

{  
	int counter = 0;
	double N;
	double ar[QUARTERS];
	while (counter < QUARTERS)
	{
		std::cout << "Please enter a value : ";	
		if (std::cin >> N )
		{
			ar[counter] = N;
			counter++;
			
		}

		else 
		{
			for (int k = counter; k < QUARTERS; k++)
				ar[k] = 0;
			break;
		
		}
	}

	Sales s, t;
	setSales(s, ar, counter);
	setSales(t);
	showSales(s);
	showSales(t);
			
	system("pause");
	return 0;

}
