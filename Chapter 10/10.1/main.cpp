#include <iostream>
#include "header.h"

int main()
{
    //constructor
    Account client1("Bob Haley", "1000005", 15005);
    client1.show();
    client1.add_money(45500.45);
    client1.show();
    client1.withdraw(10000);
    client1.show();
    Account client2 = Account("Tina Palette", "10000009", 100000);
    client2.show();
    client2.add_money(210000);
    client2.show();
    client2.withdraw(150000);
    client2.show();

    return 0;
}
