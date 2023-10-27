/* Inheritance - Single Inheritance - create a function with same name in both the classes
and creat a object of derived class and call that function by using the derived class object
only once and check what happens. */

#include<iostream>
using namespace std;

class alpha
{
    public:
    void virtual show()
    {
        cout << "\nInside Alpha";
    }
};

class beta : public alpha
{
    public:
    void show()
    {
        cout << "\nInside Beta";
    }
};

int main()
{
    beta x;
    x.show();
    alpha y;
    y.show();
    alpha *z;
    z=&y;
    z->show();
    z=&x;
    z->show();
    return 0;
}