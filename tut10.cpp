// Finding common elements between two Arrays. 

#include<iostream>
using namespace std;

int main()
{
    int a[7], b[7], i, j, k, l;

    for(i=0; i<7; ++i)
    {
        cout << "Enter the number in first array: ";
        cin >> a[i];
    }
    cout << "\n";
    cout << "Numbers in the first array are: {";
    for(i=0; i<7; ++i)
    {
        cout << a[i] << ", ";
    }
    cout << "}";
    cout << "\n";
    cout << "\n";
    for(j=0; j<7; ++j)
    {
        cout << "Enter the number in first array: ";
        cin >> b[j];
    }
    cout << "\n";
    cout << "Numbers in the first array are: {";
    for(j=0; j<7; ++j)
    {
        cout << b[j] << ", ";
    }
    cout << "}";
    cout << "\n";
    cout << "The common elements in the array are/is ";
    for(i=0; i<7; ++i)
    {
        for(j=0; j<7; ++j)
        {
            if(a[i]==b[j])
            {
                cout << a[i];
            }
        }
    }
    return 0;
}