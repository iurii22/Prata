#include <iostream>

using namespace std;
int x =20;
// Benevolent Order of Programmers name structure
struct bop
{
	char fullname[20];  // real name
	char title[20];    // job title
	char bopname[20];  // secret BOP name
	int preference;         // 0 = fullname, 1 = title, 2 = bopname
};
const int BOP_DATA = 5;
int main()
{
    cout << "Benevolent Order of Programmers Report : " << endl << endl << "a. display by name       " << "b. display by title " <<
    endl << "c. display by bopname " << "   d. display by preference" << endl << "q. quit " << endl;
    bop mass[BOP_DATA] =
    {
        {"David Guetta" , "Junior" , "Foxy", 0},
        {"Bobby Toretta" , "Senior" , "Tom", 1},
        {"Danny Jackson" , "Middle" , "Rabbit", 2},
        {"Alex Coock" , "Junior" , "Funny", 0},
        {"Tom Nickson ", "Team Lead", "Baloon", 1}

    };

    char choice;
    cout << "Please make your choice : " ;
    cin >> choice;

    while (choice != 'q')
    {
        for (int i = 0; i < BOP_DATA; i++)
        {
            switch (choice)
            {
                case 'a': cout << mass[i].fullname << endl; break;
                case 'b': cout << mass[i].title << endl; break;
                case 'c': cout << mass[i].bopname << endl; break;
                case 'd':
                            if (mass[i].preference == 0)
                                cout << mass[i].fullname << endl;
                            if (mass[i].preference == 1)
                                cout << mass[i].title << endl;
                            if (mass[i].preference == 2)
                                cout << mass[i].bopname << endl;
                          break;


                default :   {
                                cout << "You make incorrect choice, please repeat " << endl;
                                i = i + BOP_DATA;
                            }

            }
        }

    cout << endl << "Next choice : " ;
    cin >> choice;
    }


    return 0;
}
