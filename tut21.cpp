/* Constructor and Destructor - Basic Program.
Constructor - It is a special type of function which is used to initialise the object.
It has got some name as that of a class. It is invoked when the object are created.
Types of Constructor - (a) Parameterised Constructor.
                       (b) Default Constructor.
                       (c) Copy Constructor.
Destructor - Used to destroy memory allocated by the object.*/

#include<iostream>
using namespace std;

class alpha
{
    int a, b;
    
    public:
    alpha(int , int );           // Parameterised Constructor.
    alpha();                     // Default Constructor.
    alpha(alpha &);              // Copy Constructor.
    ~alpha();                    // Destructor.
    void output();
    
};

alpha :: alpha(int i, int m)
{
    a=i;
    b=m;
}
alpha:: alpha()
{
    a=100;
    b=200;
}
alpha :: alpha(alpha &x)
{
    a=x.a;
    b=x.b;
}
alpha :: ~alpha()
{
    cout << "\nObject Destroyed";
}
void alpha :: output()
{
    cout << "\n" << a+b;
}

int main()
{
    alpha x(10,20), y, z(x), m;
    
    x.output();
    y.output();
    z.output();
    m.output();
    return 0;
}
