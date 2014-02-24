#include <iostream>

using namespace std;
int function1() //void
{
    cout << "Three blind mice" << endl;
    return 0;
}
int function2()
{
    cout << "See how they run" << endl;
    return 0;
}

int main()
{
    function1();
    function1();
    function2();
    function2();

    return 0;
}
