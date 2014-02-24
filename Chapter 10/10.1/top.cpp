#include <iostream>
#include "header.h"

Account::Account(const char* client, const char *acc_n, double bal)
{
    std::cout << "Here is some information  :\n";
    name = client;
    acc_number = acc_n;
    balance = bal;
}

void Account::show() const
{
    std::cout << "\nName : " << name
    << "\naccount number : " <<  acc_number
    << "\nbalance : " << balance <<std::endl;

}
void Account::add_money(double money)
{
    balance+= money;
}
void Account::withdraw(double money)
{
    balance-=money;
}

Account::~Account(){std::cout << "Bye! ";}

