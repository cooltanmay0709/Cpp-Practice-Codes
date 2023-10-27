// Class and Objects - Display the Data only for the number called.

#include<iostream>
using namespace std;

class student
{
    int rno, marks;               // Data Member
    char name[10];                // Data Member

    public:                       // Access Specifier
    void input ();                // Member Function (Methods)
    void output ();               // Member Function (Methods)
    int num ();                   // Member Function (Methods)
};

int student :: num()
{
    int num;
    num = rno;
    return num;
}

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

    cout << "\nEnter the Choice: ";
    cin >> choice;
    for(i=0; i<5; ++i)
    {
        if(choice==x[i].num())
        {
            x[i].output();
        }
    }

    return 0;
}