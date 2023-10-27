// Polymorphism - Template - Taking max between two int, two float, two char.

#include<iostream>
using namespace std;
template<class T>
void max(T &m, T &n)
{
    if(m>n)
    {
        cout << "\n" << m << " is greater than " << n;
    }
    else
    {
        cout << "\n" << n << " is greater than " << m;
    }
}
/*
void max(float m, float n)
{
    if(m>n)
    {
        cout << "\n" << m << " is greater than " << n;
    }
    else
    {
        cout << "\n" << n << " is greater than " << m;
    }
}

void max(char m, char n)
{
    if(m>n)
    {
        cout << "\n" << m << " is greater than " << n;
    }
    else
    {
        cout << "\n" << n << " is greater than " << m;
    }
}
*/
int main()
{
    int a, b;
    float x, y;
    char i, j;

    cout << "\nEnter Two Integers: ";
    cin >> a >> b;
    max(a,b);
    cout << "\nEnter Two Float: ";
    cin >> x >> y;
    max(x,y);
    cout << "\nEnter Two Characters: ";
    cin >> i >> j;
    max(i,j);

    return 0;
}