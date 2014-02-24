#include <iostream>

using namespace std;

int main()
{
    string first_name;
    string last_name;
    char grade;
    short age;
    cout <<" What is your first name? " << endl;
    cin >> first_name;
    cout <<" What is your last name? " << endl;
    cin >> last_name;
    cout << " What letter grade do you deserve? " << endl;
    cin >> grade;
    cout << "What is your age? " << endl;
    cin >> age;
    cout << "Name: " << first_name << ", " << last_name <<  "\n Grade: " << ++grade <<
            " \n Age: " << age <<endl;

    return 0;
}
