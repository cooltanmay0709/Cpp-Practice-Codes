// Find the Prime Number.

#include<iostream>
using namespace std;

int main()
{
    int a, i, count;

    cout << "Enter the Number: ";
    cin >> a;
    count=0;

    for (i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
            count++;
        }
    }
    
    if (count==2)
    {
        cout << "The Number is a Prime number.";
    }
    else
    {
        cout << "The Number is not a Prime number.";
    }   
    return 0;
}