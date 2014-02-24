#include <iostream>

using namespace std;

int main()
{
    float Dafna_money = 100;
    float Cleo_money = 100;
    const float DAFNA_COEF = 10;
    int year = 2000;
    const int START_YEAR = 2000;
    float Dafna_income = Dafna_money;
    float Cleo_income = Cleo_money ;
    do
    {
        Dafna_income = Dafna_income + DAFNA_COEF;
        Cleo_income = Cleo_income + 0.05 * Cleo_income ;
        year++;
        cout << "DAFNAS MONEY = " << Dafna_income << " in " << year << endl << endl;
        cout << "CLEOS MONEY = " << Cleo_income << " in " << year << endl << endl;
    }
    while (Dafna_income > Cleo_income);

    cout << "So, Cleo ear more money after " << year - START_YEAR << " year" << endl;

    return 0;
}
