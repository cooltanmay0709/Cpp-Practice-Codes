/* Class and Object - Take input as account number, balance and name of account
holder now search the details of account holder by searching the account number
and after searching the program should ask for amount to be withdrawn and after 
withdrawing the balance should be updated and withdrawn amount should be displayed.*/

#include<iostream>
#include<string.h>
using namespace std;

class Bank
{
    int acc_no, acc_balance, withdraw_amt;
    string acc_name;

    public:
    void acc_details_get();
    void acc_details_display();
    void update_balance();
    int acc_num();
};

void Bank :: acc_details_get()
{
    cout << "\nEnter the Account Holder Name, Account Number and Balance: ";
    cin >> acc_name >> acc_no >> acc_balance;
}

int Bank :: acc_num()
{
    int num;
    num=acc_no;
    return num;
}

void Bank :: update_balance()
{
    int wtd_amt;
    wtd_amt=withdraw_amt;
    cout << "\nEnter the Amount to Deposit: ";
    cin >> wtd_amt;
    cout << "\nAmount Withdrawn is: " << wtd_amt;
    acc_balance=acc_balance-wtd_amt;
    acc_details_display();
}

void Bank :: acc_details_display()
{
    cout << "\n" << acc_name << "\t" << acc_no << "\t" << acc_balance;
}

int main()
{
    int i, choice;
    Bank x[5];
    
    for(i=0; i<5; ++i)
    {
        x[i].acc_details_get();
    }

    cout << "\nEnter the Account Number: ";
    cin >> choice;
    for(i=0; i<5; ++i)
    {
        if(choice==x[i].acc_num())
        {
            x[i].update_balance();
        }
        else
        {
            cout << "\nInvalid Account Number Entered...!!!";
        }
    }

    return 0;
}