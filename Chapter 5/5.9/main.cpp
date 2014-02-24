#include <iostream>
#include <string>

using namespace std;

int main()
{
    short words = 0;
    string input;
    string x = "done";
    cout << "Please enter some words: (to stop enter 'done' )" << endl;
    do
    {

     cin >> input;
     words++;

    }
    while (x != input);
    cout << "You entered " << (words = words - 1) << " words" << endl;

    return 0;
}
