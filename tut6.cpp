// Print the patterns using for loop.
/*  1      1
    12    21
    123  321
    12344321
*/

#include<iostream>
using namespace std;

int main()
{
    int i, j, k, l;
    
    cout << "\nTo Print The Pattern.\n";
    
    for ( i=1; i<=4; i++)
    {
        for ( j=1; j<=i; j++)
        {
            cout << j;
        }
        for(k=i; k<=3; ++k)
        {
            cout << "  ";
        }
        for(l=i; l>=1; --l)
        {
            cout << l;
        }
        cout << "\n";
    }
}