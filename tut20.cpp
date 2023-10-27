/* Class and Object - Passing Object as Parameter - Create a class of name Time and take data members as
hours, mintes and seconds and create objects as X, Y and Z. Hours, minutes and seconds of object X and Y 
should be added and stored in Z and displayed. */

#include<iostream>
using namespace std;

class Time
{
    int hr, min, sec;

    public:
    void add_time_display(Time, Time);
    void input_time();
};

void Time :: input_time()
{
    cout << "\nEnter the time in hours, minutes and seconds: ";
    cin >> hr >> min >> sec;
}

void Time :: add_time_display(Time X, Time Y)
{
    hr = X.hr + Y.hr;
    min = X.min + Y.min;
    sec = X.sec + Y.sec;

    if(sec>59)
    {
        min=min+1;
        sec=sec-60;
    }
    if(min>59)
    {
        hr=hr+1;
        min=min-60;
    }
    if(hr>23)
    {
        hr=0;
        min=0;
        sec=0;
    }
    cout << "\n" << hr << ":" << min << ":" << sec;
}

int main()
{
    Time X, Y, Z;

    X.input_time();
    Y.input_time();
    Z.add_time_display(X, Y);
    return 0;
}