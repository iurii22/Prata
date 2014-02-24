#include <iostream>

using namespace std;

int main()
{
    float *pmass = new float[3];
    cout << "Enter three results of running for 40 meters (in seconds): " << endl;
    cout << "First: " ;
    cin >> pmass[0];
    cout << "Second: " ;
    cin >> pmass[1];
    cout << "Third: " ;
    cin >> pmass[2];
    float average = (pmass[0] + pmass[1] + pmass[2] ) / 3;
    cout << "First result = " << pmass[0] << endl;
    cout << "Second result = " << pmass[1] << endl;
    cout << "Third result = " << pmass[2] << endl;
    cout << "Average result = " << average << endl;
    delete [] pmass;
    return 0;
}
