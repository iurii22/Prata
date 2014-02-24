#include <iostream>

using namespace std;

int main()
{
    int quantity[12];
    int sum = 0;
    int month = 12;
     char * mass[12]= {"January", "February" ,"March"," April" ," May" ,
     "June", "July", "August", "September", "October", "November", "December"};

    for (int i=0; i < month; i++)
    {
        cout << "Please enter the quantity of the books in ";
        cout << mass[i] << ": ";
        cin >> quantity[i];
        sum = sum + quantity[i];

    }
    cout << "So, you sold " << sum << "books" << endl;
    delete [] mass;
    return 0;
}
