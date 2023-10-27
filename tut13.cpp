// Class and Objects - Basic Program.

#include<iostream>
using namespace std;

class student
{
    int rno, marks;               // Data Member
    char name[10];                // Data Member

    public:                       // Access Specifier
    void input ();                // Member Function
    void output ();               // Member Function
};

void student :: input()
{
    cout << "\nEnter Name, Roll Number and Marks: ";
    cin >> name >> rno >> marks;
}
void student :: output()
{
    cout << "\n" << name << "\t" << rno << "\t" << marks;
}

int main()
{
    int i, choice;
    student x[5];

    for(i=0; i<5; ++i)
    {
        x[i].input();
    }
    for(i=0; i<5; ++i)
    {
        x[i].output();
    }

    return 0;
}