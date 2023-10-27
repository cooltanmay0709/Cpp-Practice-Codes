// Inheritance - Type - Hybrid 2.

#include<iostream>
using namespace std;

class alpha                       // Base Class
{
    protected:
    int a;
    public:
    void input1();
};

class beta : public virtual alpha                      // Derived Class
{
    protected:
    int b;
    public:
    void input2();
};

class gamma : public virtual alpha
{
    protected:
    int c;
    public:
    void input3();
};

class delta : public beta, public gamma
{
    protected:
    int d;
    public:
    void input4();
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

void delta :: input4()
{
    cout << "\nEnter the Number: ";
    cin >> d;
}

void delta :: output()
{
    int e;
    e=a+b+c+d;
    cout << "\nInputed Numbers are: " << a << ", " << b << ", " << c << " and " << d;
    cout << "\nResult is: " << e;
}

int main()
{
    delta x;
    x.input1();
    x.input2();
    x.input3();
    x.input4();
    x.output();

    return 0;
}