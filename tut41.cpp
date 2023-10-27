// Inheritance - Single Inheritance - Constructor - Constructor in base class and derived class.

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
    int b;
    public:
    beta(int, int);
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

int main()
{
    beta x(10,20);
    x.output();
    return 0;
}