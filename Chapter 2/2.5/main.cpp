#include <iostream>

using namespace std;

float CtoF(float T_Celsius);

int main()
{
    float T_Celsius;
    cout << "Please enter a Celsius value: " << endl;
    cin >> T_Celsius;
    cout << T_Celsius << " degrees Celsius is " << CtoF(T_Celsius) <<
             " degrees Fahrenheit." << endl;

    return 0;
}
    float CtoF(float T_Celsius)
{
    float T_Fahrenheit = 1.8 * T_Celsius + 32.0;
    return T_Fahrenheit;
}
