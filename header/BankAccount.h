#pragma once
#include <string>
class BankAccount
{
public:
    BankAccount(void);
    ~BankAccount();

private:
    std::string GetHolderName() { return "Not Implemented"; }

};