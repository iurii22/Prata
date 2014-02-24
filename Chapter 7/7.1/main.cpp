#include <iostream>

using namespace std;
double harmonic_mean (double num1, double num2);
int main()
{
    double num1, num2;
    cout << "Please enter two numbers (the sum of two numbers have to be different than zero ): " << endl;

    cin >> num1;
    cin >> num2;


    while (num1 != 0 && num2 != 0 && (num1 + num2 != 0))
    {
        cout << "The harmonic mean of the numbers is: \n \a" << harmonic_mean(num1,num2) << endl;
        cout << "Please enter two numbers : " << endl;
        cin >> num1;
        cin >> num2;
    }
    return 0;
}

double harmonic_mean (double num2, double num1)
    {
        double h_mean = 2.0 * num1 * num2 / (num1 + num2);
        return h_mean;
    }

