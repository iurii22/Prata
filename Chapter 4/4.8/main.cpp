#include <iostream>

using namespace std;

struct pizza
{
    char comp_name[20];
    float diametr;
    float weight;

};

int main()
{
    pizza * margo = new pizza;
    cout << "Please enter name of the company : " << endl;
    cin.getline(margo->comp_name, 20) ;
    cout << "Please enter pizza's diametr : " << endl;
    cin >> margo->diametr;
    cout << "Please enter pizza's weight : " << endl;
    cin >> margo->weight;

    cout << "Name of the company: " << margo->comp_name << endl ;
    cout << "Diametr of pizza : " << margo->diametr << endl;
    cout << "Weight of pizza : " << margo->weight <<endl;
    return 0;
}
