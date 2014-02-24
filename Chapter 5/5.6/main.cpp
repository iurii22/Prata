#include <iostream>

using namespace std;
const int Month = 12;
const int Years = 3;
int main()
{
    int sum[Years] = {0,0,0};

    const char * month[Month] = {"January", "February" ,"March"," April" ," May" ,
    "June", "July", "August", "September", "October", "November", "December"};

    int sells[Years][Month];
    for (int i = 0; i < Years ; i++)
    {
        cout << "Year number " << i + 1 << endl;
        for (int j = 0; j < Month; j++)
        {
            cout << "Please enter quantity of books you sold in " << month[j] << " : ";
            cin >> sells[i][j];
            sum[i] = sum[i] + sells[i][j];
        }
        cout << "So you sold " << sum[i] << " books in " << i + 1 << " year" << endl;

    }
    cout << "Totally you sold " << (sum[0] + sum[1] + sum[2]) << " books" << endl;

    return 0;
}
