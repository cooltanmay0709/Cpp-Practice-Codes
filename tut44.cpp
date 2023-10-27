// Inheritance - Multiple Inheritance - Constructor.

#include<iostream>
using namespace std;

class alpha
{
    protected:
    int a;
    public:
    alpha(int);
};

class beta
{
    protected:
    int b;
    public:
    beta(int);
};

class gamma : public alpha, public beta
{
    protected:
    int c;
    public:
    gamma(int, int, int);
    void output();
};

alpha :: alpha(int l)
{
    a=l;
}

beta :: beta(int m)
{
    b=m;
}

gamma :: gamma(int l, int m, int n) : alpha(l), beta(m)
{
    c=n;
}

void gamma :: output()
{
    int d;
    d=a+b+c;
    cout << "\nInputed Numbers are: " << a << ", " << b << " and " << c;
    cout << "\nResult is: " << d;
}

int main()
{
    gamma x(25, 72, 14);
    x.output();
    return 0;
}