// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
using std::cin;
#include "Header.h"

int main()
{
	
	Stonewt max, min, Bigger_Than_C = 0;
	const int N = 6;
	int no = 0;
	Stonewt C(11); 
	Stonewt Mass_Obj[N];
	Mass_Obj[0] = 100;
	Mass_Obj[1] = 9;
	Mass_Obj[2] = 11;
	Stonewt temp1;

	
	for (int i = 3; i < N; i++)
	{	
		int x;
		cout << "Please input Mass_Obj value : ";
		cin >> x;
		Mass_Obj[i] = x;
	}

		min = Mass_Obj[0];
		max = Mass_Obj[0];
		
	for (int i = 0; i < N; i++)
	{
		
		if (Mass_Obj[i] > max)
			max = Mass_Obj[i];

		if (Mass_Obj[i] < min)
			min = Mass_Obj[i];

		if (Mass_Obj[i] >= C)
		{
			no = no + 1;
			Bigger_Than_C = no ;
		}

	}
		
	
	cout << "MIN : " << min;
	cout << "MAX : " << max;
	cout << Bigger_Than_C;


	 std::cin.get();
	 std::cin.get();
	return 0;
}
