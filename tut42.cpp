// Inheritance - Multilevel Inheritance - Constructor.

#include<iostream>
using namespace std;

class alpha
{
    protected:
    int a;
    public:
    alpha(int);
};

class beta : public alpha
{
    protected:
    int b;
    public:
    beta(int, int);
};

class gamma : public beta
{
    protected:
    int c;
    public:
    gamma(int , int, int);
    void output();
};

alpha :: alpha(int l)
{
    a=l;
}

beta :: beta(int l, int m) : alpha(l)
{
    b=m;
}

gamma :: gamma(int l, int m, int n) : beta(l, m)
{
    c=n;
}

void gamma :: output()
{
    int d;
    d=a+b+c;
    cout << "\nInput values are: " << a << ", " << b << " and " << c;
    cout << "\nResult is: " << d;
}

int main()
{
    gamma x(25, 72, 14);
    x.output();
    
    return 0;
}