// Print the following pattern using for loop.
/*  ABCDEFFEDCBA
    ABCDE  EDCBA
    ABCD    DCBA
    ABC      CBA
    AB        BA
*/

#include<iostream>
using namespace std;

int main()
{
    int i, k;
    char j, l;
    cout << "Printing the given pattern\n";

    for(i=70; i>66; i--)
    {
        for(j=65; j<=i; j++)
        {
            cout << j;
        }
        for(k=i; k<=69; k++)
        {
            cout << "--";
        }
        for(l=i; l>64; l--)
        {
            cout << l;
        }
        cout << "\n";
       
    }
    return 0;
}