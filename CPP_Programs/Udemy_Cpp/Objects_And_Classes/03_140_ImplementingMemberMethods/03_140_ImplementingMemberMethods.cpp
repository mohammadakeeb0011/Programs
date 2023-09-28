#include<iostream>
#include "Account.h"
using namespace std;

int main()
{
Account frank_account;
frank_account.set_name("Akeeb`s account");
frank_account.set_balance(1000.0);

if(frank_account.deposit(200.0))
    cout <<"Deposit 0K" <<endl;
else
    cout << "Deposit Not allowed"<<endl;

if (frank_account.withdraw(500.0))
    cout<< "Withdrawal 0K"<<endl;
else
    cout<<"Not sufficient funds"<<endl;

    cout<< "Withdraw 0K"<<endl;
else
    cout<< "Not sufficient funds"<< endl;
return 0;
}