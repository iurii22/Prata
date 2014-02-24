#include <iostream>
#include <iostream>

using namespace std;
const int average_for_2 = 2;
double calculate(double x, double y, double (*pf)(double, double));
double add(double, double);
double multip(double x, double y);
double aver(double x, double y);

int main()
{
    double x,y;
    while (cin)
    {
        cout << "Please enter first value : ";
        cin >> x;
        cout << "Please enter second value : ";
        cin >> y;
        double q = calculate(x, y, add);
        q = calculate(x, y, multip);
        q = calculate(x, y, aver);

        cout << "++++++++" << endl;

        double (*px[3])(double, double) = {add, multip, aver};

        for (int i = 0; i < 3; i++)
        {
            calculate(x, y, px[i]);
        }
    }
    return 0;
}

double add(double x, double y)
{
    return x + y;
}
double multip(double x, double y)
{
    return x * y;
}
double aver(double x, double y)
{
    return (x + y ) / average_for_2;
}

double calculate(double x, double y, double (*pf)(double, double))
{
  cout << "The sum is :  "  << (*pf)(x,y) << endl;
  cout << "The product is :  "  << (*pf)(x,y) << endl;
  cout << "Average is :  "  << (*pf)(x,y) << endl;

}



