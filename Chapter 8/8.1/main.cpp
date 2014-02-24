

#include <iostream>

using namespace std;
const int Arsize = 20;
char show(const char * str, int n = 1);
int quantity = 0;
int &n = quantity;

int main()
{
	char ar[Arsize] = "Hey! How are you? ";
	show(ar);
	show(ar, 3);
	cout << "So, we have to show it " <<  n << " times" << endl;
	show(ar, n);

	return 0;
}

char  show(const char * str, int n)
{
	if (n <= 0)
		return 0;
	else
		for (int j = 0; j < n; j++)
		{
			cout << str << endl;
			quantity++;
		}
	return n;
}
