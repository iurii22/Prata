#include <iostream>

using namespace std;
const int MAX_SIZE = 10;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
double average (double ar[], int n);

int main()
{
    double golf_data[MAX_SIZE];
    int size = fill_array(golf_data, MAX_SIZE);
    show_array(golf_data, size);
    cout << "Average score is " << average (golf_data, size) << endl;
    return 0;
}
int fill_array(double ar[], int limit)
{
    double temp ;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value number " << (i + 1) << " : " ;
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
            continue;
            cout << "Bad input, so we stop it \n";
            break;
        }
        else if (temp < 0)
            break;
            ar[i] = temp;
    }
    return i;

}

void show_array(const double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Result number " << (i + 1) << ": ";
        cout << ar[i] << endl;
    }
}

double average (double ar[], int n)
{
    double aver = 0;
    for (int i = 0; i < n; i++)
    {
        aver += ar[i] ;
    }

    return aver/n;
}
