// Inheritance - Type - Multilevel Inheritance.

#include<iostream>
using namespace std;

class alpha                       // Base Class
{
    protected:
    int a, z;
    public:
    void input1();
};

class beta : public alpha                      // Derived Class
{
    protected:
    int b;
    public:
    void input2();
};

class gamma : public beta
{
    int c;
    public:
    void input3();
    void output();
};

void alpha :: input1()
{
    cout << "\nEnter the Number: ";
    cin >> a;
}

void beta :: input2()
{
    cout << "\nEnter the Number: ";
    cin >> b;
}

void gamma :: input3()
{
    cout << "\nEnter the Number: ";
    cin >> c;
}

void gamma :: output()
{
    int d;
    d=a+b+c;
    cout << "\nResult is: " << a << ", " << b << " and " << c << " and their sum is " << d;
}

int main()
{
    gamma x;
    x.input1();
    x.input2();
    x.input3();
    x.output();
    return 0;
}