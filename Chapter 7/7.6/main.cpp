#include <iostream>

using namespace std;
double Fill_array(double ar[], int n);
void Reverse_array(double ar[], int size);
void Show_array (double ar[], int n);
const int MAX = 10;

int main()
{
    double mass[MAX];
    int ar_size = Fill_array(mass, MAX);
    Reverse_array(mass, ar_size);
    Show_array(mass, ar_size);
    return 0;
}
double Fill_array(double ar[], int n)
{
    double temp;
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Please enter value " << (i+1) << ":" ;
        cin >> temp;

        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << " Thank you. Bye ! " << endl;
                break;
        }
        ar[i] = temp;
    }
    cout << i << endl;
    return i;
}

void Reverse_array(double ar[], int n)
{
    double* rev_ar = new double[n];
    for (int j = 0; j < n; j++ )
    {
        if(j == n - 1)
            rev_ar[n - 1] = ar[n - 1];
            else if (j == 0)
                rev_ar[0] = ar[0];
        else rev_ar[(n - 1)- j] = ar[j];

    }
    for (int i = 0; i < n; i++)
    {
        ar[i] = rev_ar[i];
    }
    delete [] rev_ar;

}

void Show_array (double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Element number " << (i + 1) << ":";
        cout << ar[i] << endl;
    }
}
