// Find the maximum between the elements of array.

#include<iostream>
using namespace std;

int main()
{
    int i, j, a[7], b, c;

    for(i=0; i<7; ++i)
    {
        cout << "Enter the numbers in the array: ";
        cin >> a[i];
    }
    cout << "\n";
    cout << "The array is: {";
    for(i=0; i<7; ++i)
    {
        cout << a[i] << ",";
    }
    cout << "}";

    b=0;
    for(i=0; i<7; ++i)
    {
        if(a[i]>b)
        {
            b=a[i];
        }
    }
    cout << "\nThe maximum number in the array is " << b;
    return 0;
}