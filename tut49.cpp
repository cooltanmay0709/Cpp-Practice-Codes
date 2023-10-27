// File Handling - Basic File Reading.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[20];
    int rno, marks;

    ifstream fin("tut48BasicFile.txt");
    fin >> name >> rno >> marks;
    cout << "\n" << name << "\n" << rno << "\n" << marks;
    fin.close();
    
    return 0;
}