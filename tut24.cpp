/* Friend Function - It is a special type of function which is used to access data members
and member functions of one or more than one class. It is called independently. */

/* Take the input for age and name of a student and using friend function
execute the program for elder */

#include<iostream>
using namespace std;

class Student
{
    int age;
    char name[10];
    public:
    void input_data();
    friend void max(Student, Student);
};

void Student :: input_data()
{
    cout << "\nEnter the Name and Age of the Student: ";
    cin >> name[10] >> age;
}

void max(Student x, Student y)
{
    if(x.age > y.age)
    {
        cout << "\n" << x.name[10] << " is elder";
    }
    else if(y.age > x.age)
    {
        cout << "\n" << y.name[10] << " is elder";
    }
    else
    {
        cout << "\nBoth have same age";
    }
}

int main()
{
    Student x, y;
    x.input_data();
    y.input_data();
    max(x,y);
    return 0;
}