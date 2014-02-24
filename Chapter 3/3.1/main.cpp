#include <iostream>

using namespace std;

int main()
{
    const int COEF  = 12;
    int inch, feet;
    cout << "Please enter your height in inches: " << endl << "_";
    cin >> inch;
    feet = inch / COEF;
    inch = inch % COEF;
    cout << "Your height is: " << feet << "'" << inch << "''" << endl;
    return 0;
}
