#include <iostream>
using namespace std;

const int Donations = 9;
int main()
{
    double mass[Donations];
    int iter = 0;
    double total = 0.0;
    short bigger_aver = 0;
    cout << "Please enter your donations : " << endl;
    while (iter < Donations && cin >> mass[iter])
    {
        total += mass[iter];
        if (++iter < Donations)
            cout << "Please enter next donation : " << endl;
    }
    for (int i = 0; i < iter; i++)
    {
        if (mass[i] > total/iter)
            bigger_aver = bigger_aver++;
    }
    if (iter == 0)
        cout << "Sorry, there are no donations this time " << endl;

    else
        cout << "The average of the numbers = " << total/iter << endl << "There are " << bigger_aver
            << " larger than the average" << endl;

    return 0;
}
