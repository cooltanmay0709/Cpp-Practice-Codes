/* Pass Object as Parameter - Take the input for two object men 
for their age and name swap their age by passing the object. */

#include<string.h>
#include<iostream>
using namespace std;

class Men
{
    int age;
    string name;

    public:
    void input();
    void swap_age(Men);
};

void Men :: input()
{
    cout << "\nEnter the Name and Age: ";
    cin >> name >> age;
}

void Men :: swap_age(Men y)
{
    string temp;
    temp = name;
    name = y.name;
    y.name = temp;

    cout << "\nAge of " << name << " is " << age << "\nAge of " << y.name << " is " << y.age;
}

int main()
{
    Men x, y;
    x.input();
    y.input();
    x.swap_age(y);
    return 0;
}