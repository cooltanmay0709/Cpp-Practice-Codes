/* Pass Object as Parameter - Take the input for two object men 
for their age and name compare their age by passing the object. */

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    int age;
    string name;

    public:
    void input();
    void max(Student);
};

void Student :: input()
{
    cout << "\nEnter the Name and Age of a Student: ";
    cin >> name >> age;
}

void Student :: max(Student y)
{
    if (age>y.age)
    {
        cout << name << " is elder";
    }
    else if (age<y.age)
    {
        cout << y.name << " is elder";
    }
    else
    {
        cout << "Both have same age";
    }
    
}

int main()
{
    Student x, y;
    x.input();
    y.input();
    x.max(y);                             // Invoking x Object and Passing y Object as Parameter
    return 0;
}