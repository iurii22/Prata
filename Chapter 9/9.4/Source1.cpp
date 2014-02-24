#include "Header.h"
#include <iostream>

namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		double max;
		double min;
		double sum = 0;
		min = ar[0];
		max = ar[0];
		for (int i = 0; i < n; i++)
		{			
			sum += ar[i];
			s.sales[i] = ar[i];

			if (max < ar[i])
				max = ar[i];

			else if (ar[i] < min)
				min = ar[i];
		}
		s.average = sum / n;
		s.min = min;
		s.max = max;
		*(s.sales) = n;
		
	}

	

	void setSales(Sales & s)
	{
		extern int counter;
		std::cout << "Enter your sales  :\n";
		double max;
		int i = 0;
		double min;
		double temp;
		double sum = 0;
		
		std::cin.get();
		while (i < QUARTERS)
		{
			if (std::cin.fail())
			{
				std::cin.clear();    //Try putting cin.clear() and std::cin.ignore(std::numeric_limits<streamsize>::max(),'\n'); 
									//in your catch clause. cin.clear() clears the failure state in cin, and cin.ignore() throws away rest of the line waiting in the input buffer.
				std::cin.ignore();
			}
			std::cout << "Please enter a number : ";
			if (std::cin >> (s.sales[i]))
				
				sum += s.sales[i];
			    i++;
		}
		s.average = sum /i;

		min = s.sales[0];
		max = s.sales[0];
		
		for (int j = 0; j < QUARTERS; j++)
	{
		temp = s.sales[j];
		if (temp < min)
			min = temp;
		else if (temp > max)
			max = temp;
	}
	s.min = min;
	s.max = max;
	*(s.sales) = sum;
			
	}

	
	void showSales(const Sales & s)
	{
		std::cout << "Sales = " << *(s.sales) <<  " Avarage = " << s.average
			<< " Max = " << s.max << " Min = " << s.min << std::endl;

	}
}