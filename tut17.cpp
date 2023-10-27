/* Class and Object - Take input as account number, balance and name of account holder now search
the details of account holder by searching the account number and after searching the program should
give a choice to withdrawn or deposit amount and after withdraw or deposit the balance should be updated 
and withdrawn or deposited amount should be displayed.*/

#include<iostream>
#include<string.h>
using namespace std;

class Bank
{
    int acc_no, balance_amt;
    string name;
    
    public:
    void acc_details_get();
    void acc_details_display();
    void choice_dpt_wtd();
    int acc_num_search();
};

void Bank :: acc_details_get()
{
    cout << "\nEnter the Account Holder Name, Account Number and Balance: ";
    cin >> name >> acc_no >> balance_amt;
}

int Bank :: acc_num_search()
{
    int acc_num;
    acc_num = acc_no;
    return acc_num;
}

void Bank :: choice_dpt_wtd()
{
    int amt_wtd, amt_dpt, choice;
    cout << "\nDear Account Holder would you like to Withdraw Amount or Deposit Amount: ";
    cout << "\nPress 1: To Withdraw Amount";
    cout << "\nPress 2: To Deposit Amount";
    cout << "\nPress 3: To Check Balance";
    cout << "\nYour Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "\nEnter the Amount to Withdraw: ";
            cin >> amt_wtd;
            balance_amt = balance_amt - amt_wtd;
            acc_details_display();
            break;
        case 2:
            cout << "\nEnter the Amount to Deposit: ";
            cin >> amt_dpt;
            balance_amt = balance_amt + amt_dpt;
            acc_details_display();
            break;
        case 3:
            cout << "\nDisplaying Balance ";
            acc_details_display();
            break;
        default:
            cout << "\nYou Have Entered The Wrong Choice...!!!";
            break;
    }
}

void Bank :: acc_details_display()
{
    cout << "\n" << name << "\t" << acc_no << "\t" << balance_amt;
}

int main()
{
    int i, acc_numm;
    Bank x[5];

    for(i=0; i<5; ++i)
    {
        x[i].acc_details_get();
    }
    
    cout << "Enter the Account Number to withdraw money or to deposit or to check balance: ";
    cin >> acc_numm;
    for (i=0; i<5; ++i)
    {
        if(acc_numm==x[i].acc_num_search())
        {
            x[i].choice_dpt_wtd();
        }
    }
    return 0;
}