// Inheritance - Hierarchical Inheritance - Constructor.

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
    void output();
};

class gamma : public alpha
{
    protected:
    int c;
    public:
    gamma(int, int);
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

void beta :: output()
{
    cout << "\nResult is: " << a+b;
}

gamma :: gamma(int l, int n) : alpha(l)
{
    c=n;
}

void gamma :: output()
{
    cout << "\nResult is: " << a+c;
}


int main()
{
    beta x(10, 20);
    x.output();

    gamma y(20, 30);
    y.output();
    
    return 0;
}
