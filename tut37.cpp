// Inheritance - Type - Hierarchical Inheritance.

#include<iostream>
using namespace std;

class alpha                       // Base Class
{
    protected:
    int a, z;
    public:
    void input();
};

class beta : public alpha                      // Derived Class
{
    protected:
    int b;
    public:
    void get();
    void output();
};

class gamma : public alpha
{
    protected:
    int c;
    public:
    void get();
    void output();
};

void alpha :: input()
{
    cout << "\nEnter the Number: ";
    cin >> a;
}

void beta :: get()
{
    cout << "\nEnter the Number: ";
    cin >> b;
}

void beta :: output()
{
    cout << "\nResult is: " << a+b;
}

void gamma :: get()
{
    cout << "\nEnter the Number: ";
    cin >> c;
}

void gamma :: output()
{
    cout << "\nResult is: " << a+c;
}


int main()
{
    beta x;
    x.input();
    x.get();
    x.output();

    gamma y;
    y.input();
    y.get();
    y.output();
    
    return 0;
}