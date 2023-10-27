// File Handling - Basic File Creating and Writing on it.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[20];
    int rno, marks;

    ofstream fout("tut48BasicFile.txt");  // Here you can give any name to the object i have given fout name
    cout << "\nEnter the Name, Roll No and Marks: ";
    cin >> name >> rno >> marks;
    fout << "\n" << name << "\n" << rno << "\n" << marks;
    fout.close();

    return 0;
}
