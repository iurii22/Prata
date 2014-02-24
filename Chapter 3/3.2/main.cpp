#include <iostream>

using namespace std;

int main()
{
    const int TO_INCH = 12;
    const float TO_KG = 2.2;
    const float TO_M = 0.0254;
    float feet, inch, pound, BMI, kg, m;
    cout << "Please enter your height in feet: " << endl << "_";
    cin >> feet;
    cout << " and inches: ";
    cin >> inch;
    cout << endl;
    inch = feet * TO_INCH + inch;
    cout << "Please enter your weight in pounds: " << endl;
    cin >> pound;
    kg = pound / TO_KG;
    m = inch * TO_M;
    cout << "Your BMI : " << kg /(m * m) << endl;
    return 0;
}
