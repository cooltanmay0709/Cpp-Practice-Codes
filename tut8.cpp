// Array - Write a program for sum of all the elements of array.

#include<iostream>
using namespace std;

int main()
{
    int a[5], i;

    for(i=0; i<5; ++i)
    {
        cout << "Enter the Numbers to print the array: ";
        cin >> a[i];
    }
    cout << "\nPrinting the Numbers from Array-\n"; 
    for(i=0; i<5; ++i)
    {
        cout << a[i] << endl;
    }
    return 0;
}