// Take input and print multiplication table for inputed number.

#include<iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter Number to print Multiplication table for the number: ";
    cin >> a;

    for (int i = 1; i < 11; i++)
    {
        cout << "\n" << a << " X " << i << " = " << a*i;
    }
    return 0;
}