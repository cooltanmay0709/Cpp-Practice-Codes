/* Inheritence - The capability of a class to derive properties and characteristics 
from another class is called Inheritance. It supports the concept of reusability.
Sub Class: The class that inherits properties from another class is called Subclass or Derived Class. 
Super Class: The class whose properties are inherited by a subclass is called Base Class or Superclass. 

Inheritance - Type - Single Inheritance. */

#include<iostream>
using namespace std;

class alpha                                    // Base Class
{
    protected:
    int a, z;
    public:
    void input();
};

class beta : public alpha                      // Derived Class
{
    int b;
    public:
    void get();
    void put();
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

void beta :: put()
{
    int c;
    c=a+b;
    cout << "\nResult is: " << a << " and " << b << " and their sum is " << c;
}

int main()
{
    beta x;
    x.input();
    x.get();
    x.put();
    return 0;
}