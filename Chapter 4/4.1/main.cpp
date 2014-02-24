#include <iostream>

using namespace std;

int main()
{
    short int age;
    char x;
    const int arrsize = 20;
    const int g_size = 2;
    char name[arrsize];
    char l_name[arrsize];
    char grade;
    cout << "What is your first name? " << endl;
    cin.get(name, arrsize).get();
    cout << "What is your last name? " << endl;
    cin.get(l_name, arrsize).get();
    cout << "What letter grade do you deserve?" << endl;
    cin >> grade;
    cout << "What is your age? " << endl;
    cin >> age;
    cout << age << endl;
    cout << "Name: " << name << "," << l_name << endl << "Grade: " << ++grade << endl << "Age: " << age << endl;
    return 0;
}
