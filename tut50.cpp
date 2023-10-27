// File Handling - Taking any file from the device and displaying its content.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;
    ifstream fin("C:\\Users\\Tanmay Pawar\\C Programs\\userinputdata1.txt");

    while(fin)
    {
        fin.get(ch);
        cout << ch;
    }
    fin.close();

    return 0;
}