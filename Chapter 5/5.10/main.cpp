#include <iostream>
using namespace std;
int main()
{
   int str;
   cout << "Enter the quantity of strings :" << endl;
   cin >> str;
   int mass [str][str];
   for (int i=0; i < str; i++)
   {
       for (int j = 0; j < str; j++)
       {
        if  (j >= str - (i + 1))
        {
            cout << "*";
        }
        else cout << ".";

       }
       cout << endl;
   }

   return 0;
}
