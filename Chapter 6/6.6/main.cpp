#include <iostream>

using namespace std;

struct donations
{
    string name;
    double persons_don;
};
const double GRAND_DONATION = 10000;
int main()
{
    int i = 0;
    int check = 0;
    cout << "Please enter the number of contributors: " ;
    int number;
    cin >> number;
    donations *ps = new donations[number];
    cout << "Please enter the name and quantity of donations \n \n ";
    for (i = 0; i < number; i++)
    {
        cout << "Please enter the person's name: " ;
        cin >> ps[i].name;
        cout << "Please enter the quantity of donations: " ;
        cin >> ps[i].persons_don;
    }
    for (i = 0; i < number; i++)
    {
        if (ps[i].persons_don >= GRAND_DONATION && check == 0)
        {
            check = 1;
            cout << "Grand Patrons are : \n " ;
            for (int j = 0; j < number; j++)
               if(ps[j].persons_don >= GRAND_DONATION)
                cout << ps[j].name << " $ " << ps[j].persons_don << endl;

        }
    }
        check = 0;
    for (i = 0; i < number; i++)
     {

        if (ps[i].persons_don < GRAND_DONATION && ps[i].persons_don > 0 && check == 0)
        {
            check = 1;
            cout << "Patrons are : \n " ;
            for (int k = 0; k < number; k++)
                if(ps[k].persons_don < GRAND_DONATION && ps[k].persons_don > 0)
                    cout << ps[k].name << " $ " << ps[k].persons_don << endl;
                else if (k == number - 1)
                    check = 1;
        }

     }
     for (int i = 0; i < number; i++)
        if (ps[i].persons_don <= 0 && check == 0 && ps[i].persons_don > GRAND_DONATION)
        {
            cout << " None " << endl;
            check = 1;
        }

        delete [] ps;
    return 0;
}
