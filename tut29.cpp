// Operator Overloadig - Binary Operator Overloading - 
// Write a program for greater and smaller.

#include<iostream>
#include<string.h>
using namespace std;

class String
{
    char a[10];
    public:
    void input();
    void output();
    void operator >(String);
};

void String :: input()
{
    cout << "\nEnter the Name: ";
    cin >> a;
}

void String :: operator >(String y)
{
    int p, q;
    p=strlen(a);
    q=strlen(y.a);

    if (p>q)
    {
        cout << "\nGreater String is: " << a << "\nSmaller String is: " << y.a;
    }
    else if (q>p)
    {
        cout << "\nGreater String is: " << y.a << "\nSmaller String is: " << a;
    }
    else
    {
        cout << "\nBoth Strings " << a << " and " << y.a << " are equal";
    } 
}


int main()
{
    String x, y;
    x.input();
    y.input();
    x>y;
    return 0;
}