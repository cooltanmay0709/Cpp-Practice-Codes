// 2D Array(Matrix) Add two different matrix and the output should be in matrix form.

#include<iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], i, j, c;

    for(i=0; i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {
            cout << "Enter the Number in 2D Array: ";
            cin >> a[i][j];
        }
    }
    cout << "\n";
    cout << "The Numbers in the 2D Array are: \n";
    for(i=0; i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {
            cout << "\t" << a[i][j];
        }
        cout << "\n";
    }

    
    return 0;
}