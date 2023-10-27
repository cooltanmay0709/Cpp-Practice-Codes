// Operator Overloading - Binary Operator Overloading.
// 1. Left Hand Side is Invoked. 2. Right Hand Side is Passed.

#include<iostream>
using namespace std;

class binary
{
    int a, b;
    public:
    void input();
    void output();
    binary operator +(binary);
};

void binary :: input()
{
    cout << "\nEnter the two numbers: ";
    cin >> a >> b;
}

binary binary :: operator +(binary y)
{
    binary m;
    m.a = a + y.a;
    m.b = b + y.b;
    return m;
}

void binary :: output()
{
    cout << "\nResult: " << a << " " << b;
}

int main()
{
    binary x, y, z;
    x.input();
    y.input();
    z=x+y;
    z.output();

    return 0;
}