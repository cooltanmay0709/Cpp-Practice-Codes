// Operator Overloading - Unary Operator 

#include<iostream>
using namespace std;

class unary
{
    int a, b;
    public:
    void input();
    void output();
    void operator -();
};

void unary :: input()
{
    cout << "\nEnter the two num: ";
    cin >> a >> b;
}

void unary:: operator -()
{
    a=-a;
    b=-b;
}

void unary :: output()
{
    cout << a << "\n" << b;
}

int main()
{
    unary x;
    x.input();
    -x;
    x.output();
    return 0;
}