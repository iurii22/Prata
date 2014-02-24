#include <iostream>
#include <cctype>

using namespace std;
const double LESS_THAN_5000 = 5000;
const double LESS_THAN_15000 = 15000;
const double INCOME_35000 = 35000;

const double TAX_ZERO_PERCENT = 0;
const double TAX_TEN_PERCENT = 0.10;
const double TAX_15_PERCENT = 0.15;
const double TAX_20_PERCENT = 0.20;

const double STAND_MAX_TAX = 4000;
const double STAND_TAX_FOR_TEN_GRAND = 1000;



int main()
{
    double income;
    cout << "Please input your income in $ : " << endl;

    while (income >= 0 &&  cin >> income)
    {
        if (income <= LESS_THAN_5000)
            cout << "You are tax free! \n \n" ;

        if (income <= LESS_THAN_15000 && income > LESS_THAN_5000)
            cout << "Your tax is $ " << TAX_ZERO_PERCENT + (income - LESS_THAN_5000) * TAX_TEN_PERCENT  << endl << endl;

        if (income <= INCOME_35000 && income > LESS_THAN_15000)
            cout << "Your tax is $ " << TAX_ZERO_PERCENT + (income - LESS_THAN_15000) * TAX_15_PERCENT + STAND_TAX_FOR_TEN_GRAND << endl << endl;

        if (income > INCOME_35000)
            cout << "Your tax is $ " << TAX_ZERO_PERCENT + (income - INCOME_35000) * TAX_20_PERCENT + STAND_MAX_TAX << endl << endl;

      cout << "Please input your income in $ : " << endl;

    }
    cout << "You enteren incorrect data, bye " << endl;
    return 0;
}
