// Operator Overloading - Binary Operator Overloading - Swap the character.

#include<iostream>
#include<string.h>
using namespace std;

class Swap
{
    char a[10];
    public:
    void input();
    void operator =(Swap);
};

void Swap :: input()
{
    cout << "\nEnter the Name: ";
    cin >> a;
}

void Swap :: operator =(Swap y)
{
    Swap temp[10];
    strcpy(temp,a);
    strcpy(a,y.a);
    strcpy(y.a,temp);

    cout << "\nSwap Result is: " << a << " and " << y.a;
}

int main()
{
    Swap x, y, z;
    x.input();
    y.input();
    x=y;
    return 0;
}