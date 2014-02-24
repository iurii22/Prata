#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int SIZE = 60;

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
    char filename[SIZE];
    ifstream inFile;
    cout << "Enter the name of datafile: " ;
    cin.getline (filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could'n open the file " <<filename << endl;
        exit (EXIT_FAILURE);
    }
    int number;
    inFile >> number;
    donations *ps = new donations[number];

    for (i = 0; i < number; i++)
    {
        inFile >> ps[i].name;
        cout << ps[i].name << endl;

        inFile >> ps[i].persons_don;
        cout << ps[i].persons_don << endl;
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
        if (ps[i].persons_don <= 0 && check == 0)
        {
            cout << " None " << endl;
            check = 1;
        }

        delete [] ps;
    return 0;
}
