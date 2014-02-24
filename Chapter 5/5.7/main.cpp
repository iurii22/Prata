#include <iostream>

using namespace std;

struct car
{
    string manuf;
    int year;

} ;

int main()
{
    int quantity;
    cout << "Enter, how many cars do you want to add :" << endl;
    cin >> quantity;
    car *options = new car[quantity];
    for (int i=0; i < quantity; i++)
    {
        cout << "Car number :" << i+1<< endl;
        cout << "Enter the name of manufacturer : " << endl;
        std::getline(cin, (options + i)->manuf).get();
        //cin >> (options + i)->manuf;
        cout << "Enter the year of a car : " << endl;
        cin >> (options + i)->year;
    }
        cout << "Here is your collection : " << endl;
        for (int j=0; j < quantity; j++)
        {
            cout << (options + j)->year << "  " ;
            cout << (options + j)->manuf << endl;

        }
    delete [] options;
     return 0;
}
