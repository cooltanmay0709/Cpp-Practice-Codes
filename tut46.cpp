// Class and Object - This Pointer (*this).

#include<iostream>
using namespace std;

class Student
{
    int age;
    char name[10];
    public:
    void input();
    void output();
    Student max(Student);
};

void Student :: input()
{
    cout << "\nEnter Name and Age: ";
    cin >> name >> age;
}

Student Student :: max(Student y)
{
    if(age > y.age)
    {
        return *this;
    }
    else
    {
        return y;
    }
}

void Student :: output()
{
    cout << "\n" << name <<" is elder with age: " << age;
}

int main()
{
    Student x, y, z;
    x.input();
    y.input();
    z=x.max(y);
    z.output();

    return 0;
}
