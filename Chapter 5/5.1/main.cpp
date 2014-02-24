#include <iostream>

using namespace std;

int main()
{
    int a, b, sum = 0;
    cout << "Please enter first number : " << endl;
    cin >> a;
    cout << "Please enter second number : " << endl;
    cin >> b;
    for (a; a <= b ; a++)
    {
        sum = sum + a;
    }
    cout << sum << endl;
    return 0;
}
