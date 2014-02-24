#include <iostream>

using namespace std;

int main()
{
    const double KM_TO_MILE = 62.14;
    const double GALL_TO_LITR = 3.875;
    float litr, gall;
    cout << "Please enter quantity of liters per 100 kilometers : " << endl;
    cin >> litr;
    gall = litr / GALL_TO_LITR;
    cout << "IN USA :  " << KM_TO_MILE / gall << " miles/" << " 1 gallon" << endl;
    return 0;
}
