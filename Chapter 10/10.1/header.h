#include <string>
using std::string;
#ifndef HEADER_H_
#define HEADER_H_

class Account
{
    string name;
    string acc_number;
    double balance;
public:
    Account(const char* client, const char *acc_n, double bal = 0);
    ~Account();
    void show() const;
    void add_money(double money);
    void withdraw(double money);

};
#endif
