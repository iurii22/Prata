#include <iostream>
using namespace std;
double astronom(double);
int main()
{
    double L_year;
    cout << "Enter the number of light years: " << endl;
    cin >> L_year;
    cout << L_year <<" light years = "<< astronom(L_year) <<
            " astronomical units." << endl;

    return 0;
}
double astronom(double L_year)
{
  double ast_units = L_year * 63240;
  return ast_units;
}
