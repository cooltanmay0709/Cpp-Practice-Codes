// Class and Object - This Pointer (*this).

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    char name[20];
    public:
    void input();
    void output();
    Student namecmp(Student);
};

void Student :: input()
{
    cout << "\nEnter Name: ";
    cin >> name;
}

Student Student :: namecmp(Student y)
{
    int l, m;
    l=strlen(name);
    m=strlen(y.name);
    
    if(l>m)
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
    cout << "\n" << name << " is greater";
}

int main()
{
    Student x, y, z;
    x.input();
    y.input();
    z=x.namecmp(y);
    z.output();

    return 0;
}
