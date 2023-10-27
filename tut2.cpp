// Calculate the total amount, discount and net amount after 30% of discount.
// Take input for the quantity and rate of eace product buyed.

#include<iostream>
using namespace std;

int main()
{
    int qut;
    float amt, dis, net_amt, rate;

    cout << "Enter the Quantity of Product: ";
    cin >> qut;
    cout << "Enter the Rate of each Product: ";
    cin >> rate;

    amt=qut*rate;
    dis=amt*30/100;
    net_amt=amt-dis;

    cout << "\nTotal amount is: " << amt;
    cout << "\nDiscount on Total amount is: " << dis;
    cout << "\nTotal Net Amount after discount is: " << net_amt;
    return 0;
}