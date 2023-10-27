// Friend Function - Swap name

#include<iostream>
#include<string.h>
using namespace std;

class NameSwap
{
    char name[10];

    public:
    void input_name();
    friend void swap(NameSwap , NameSwap );
};

void NameSwap :: input_name()
{
    cout << "\nEnter the Name: ";
    cin >> name;
}

void swap(NameSwap x, NameSwap y)
{
    char temp[10];
    strcpy(temp, x.name);
    strcpy(x.name, y.name);
    strcpy(y.name, temp);

    cout << "\nSwap Result: " << x.name << " " << y.name;
}

int main()
{
    NameSwap x, y;
    x.input_name();
    y.input_name();
    swap(x,y);

    return 0;
}