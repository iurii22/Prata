#include <iostream>

using namespace std;

int main()
{
    const int TO_SECONDS = 60;
    const int SEC_IN_HOUR = 3600;
    float degrees, seconds, mins;
    cout << "Enter the latitude in degrees, minutes and seconds : " << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minute of arc : ";
    cin >> mins;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    cout << degrees <<" degrees, " << mins << " minutes, " << seconds << " seconds = " <<
            (degrees + (mins * TO_SECONDS + seconds) / SEC_IN_HOUR ) << " degrees " << endl;
    return 0;
}
