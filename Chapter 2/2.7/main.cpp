#include <iostream>

using namespace std;
void h_m(int,int);

int main()
{
    int hours, minutes;
    cout << "Enter the number of hours: " << endl;
    cin >> hours;
    cout << "Enter the number of minutes: " << endl;
    cin >> minutes;
    h_m(hours, minutes);

    return 0;
}
void h_m(int a, int b)
{
  cout<<"Time : " << a << ":" << b << endl;
}
