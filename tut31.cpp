// Operator Overloading Using Friend Function - Unary Operator Overloading.

#include<iostream>
using namespace std;

class alpha
{
    int a, b;
    public:
    void input();
    friend void operator -(alpha &);
    void output();
};

void alpha :: input()
{
    cout << "\nEnter two Number: ";
    cin >> a >> b;
}

void operator -(alpha &x)
{
    x.a = -x.a;
    x.b = -x.b;
    cout << "\nResult is: " << x.a << " and " << x.b;
}

int main()
{
    alpha x;
    x.input();
    -x;
    return 0;
}