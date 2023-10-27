// Find Uncommon in the Array.

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
        cout << "Enter the number in second array: ";
        cin >> b[j];
    }
    cout << "\n";
    cout << "Numbers in the second array are: {";
    for(j=0; j<7; ++j)
    {
        cout << b[j] << ", ";
    }
    cout << "}";
    cout << "\n";
    cout << "The uncommon elements from both the arrays are ";
    for(i=0; i<7; ++i)
    {
        k=0;
        for(j=0; j<7; ++j)
        {
            if(a[i]==b[j])
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
            cout << a[i] << " ";
        }
    }
    for(i=0; i<7; ++i)
    {
        k=0;
        for(j=0; j<7; ++j)
        {
            if(b[i]==a[j])
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
            cout << b[i] << " ";
        }
    }
    return 0;
}