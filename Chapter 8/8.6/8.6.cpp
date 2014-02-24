// 8.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <string>
using namespace std;

template <typename T>
void maxn(T *ar, int n);

template <typename T>
void Show(T * ar, int n);

template <> void maxn(char* ar[], int n);

const int AR_INT = 6;
const int AR_D = 4;
const int CH_P = 5;

int _tmain(int argc, _TCHAR* argv[])
{
	int ar1[AR_INT] = { 11, 6, 0, 7, 9, 3 };
	cout << "Here is our array : \n";
	Show(ar1, AR_INT);
	cout << endl << "The max element is : ";
	maxn(ar1, AR_INT);

	double ar2[AR_D] = {8, 96, 700, 37};
	cout << "Here is our second array : \n";

	Show(ar2, AR_D);
	cout << endl << "The max element is : ";
	maxn(ar2, AR_D);
		
	char *arr[CH_P]= { "strt69t", "str-5", "stu4567", "str-i-i", "s1" };
	cout << "\n Here is our char array : \n";
	Show(arr, CH_P);

	cout << endl << "The max char lenght is : ";
	maxn(arr, CH_P);

	system("pause");
	return 0;
}

template <typename T>
void Show(T ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << ", ";
	}

}

template <typename T>
void maxn(T ar[], int n)
{	
	T max = 0, temp;
	for (int i = 0; i < n; i++)
	{
		temp = ar[i];

		if (temp > max)
			max = temp;
	}

	cout << max << endl;
	
}

template <> void maxn(char* ar[], int n)
{
	int max = 0; int length_max = 0;
	for (int i = 0; i < n; i++)
	{
		
		if (length_max < strlen(ar[i]))
		{
			length_max = strlen(ar[i]);
			max = i;
		}


	}
	cout << ar[max] << endl;
}

