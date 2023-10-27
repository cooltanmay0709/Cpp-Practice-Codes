// Practice tut13.cpp

#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    char name[20];
    int rno, marks;
    public:
    void input();
    void output();
};

void Student :: input()
{
    cout << "\nEnter the Name, Roll No and Marks: ";
    cin >> name >> rno >> marks;
}

void Student :: output()
{
    cout << "\n" << name << "\t" << rno << "\t" << marks;
}

int main()
{
    int i;
    Student x[5];
    fstream fin("tut48BasicFile.txt", ios::in | ios::out);
    
    for(i=0; i<5; ++i)
    {
        x[i].input();
        fin.write((char*)&x[i], sizeof(Student));
    }
    for(i=0; i<5; ++i)
    {
        fin.read((char*)&x[i], sizeof(Student));
        x[i].output();
    }

    return 0;
}
