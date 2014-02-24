#include <iostream>
#include <new> // for placement new
#include <string.h>

using namespace std;
 const int SIZE = 20;
 const int N = 2;
struct chaff
{
    char dross[SIZE];
	int slag;
};
int main()
{
	char* buff = new char[N * sizeof(chaff)];

	chaff* p1 = new (buff)chaff;
	chaff* p2 = new (buff + sizeof(chaff))chaff;

	char str[10] = "Hello";
	char str1[15] = "how are you";

	strcpy(p1->dross, str);
	p1->slag = 650;

	strcpy(p2->dross, str1);

	p2->slag = 700;

	cout << p1->dross << " " << p1->slag << endl << p2->dross << " " <<  p2->slag << endl;


	cout << "dross " << &(p1->dross) << "----" << (&p2->dross) << endl << "slag  " << (&p1->slag) <<"------"<< (&p2->slag) << endl;


	delete[] buff;



	return 0;
}
