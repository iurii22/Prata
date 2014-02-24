#include <iostream>

using namespace std;

int main()
{
    int x,sum = 0;
    cout << "Please enter a number " << endl;
    cout << "To stop inputing, enter '0' " << endl;

    while(1)
    {
    cin >> x;
    sum = sum + x;
    cout << "sum:" << sum << endl;
    if (x == 0 ) break;
    }
    cout << "Result: " << sum << endl;
    return 0;
}
