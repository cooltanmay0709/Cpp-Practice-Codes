/* Constructor and Destructor - Take the input for object men for their name swap their name. */

#include<iostream>
#include<string.h>
using namespace std;

class Swap
{
    char name[10];

    public:
    Swap(char *);
    Swap();
    void swap_name(Swap &);
    void output();
};

Swap :: Swap(char l[])
{
   strcpy(name, l);
}

Swap :: Swap()
{

}

void Swap :: swap_name(Swap &Y)
{
    char temp[10];
    strcpy(temp,name);
    strcpy(name, Y.name);
    strcpy(Y.name, temp);
}

void Swap :: output()
{
    cout << "Result is: " << name << endl;
}
int main()
{
    Swap X("Sahil"), Y("Soham");
    X.swap_name(Y);
    X.output();
    Y.output();
    return 0;
}