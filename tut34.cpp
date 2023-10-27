// Operator Overloading Using Friend Function - Binary Operator Overloading.

#include<iostream>
using namespace std;

class Time
{
    int day, hr, min, sec;
    public:
    void time_input();
    void time_output();
    friend Time operator +(Time, Time);
};

void Time :: time_input()
{
    cout << "\nEnter the Time in hours, minutes and seconds: ";
    cin >> hr >> min >> sec;
}

Time operator +(Time x, Time y)
{
    Time z;
    z.day = 0;
    z.hr = x.hr + y.hr;
    z.min = x.min + y.min;
    z.sec = x.sec + y.sec;

    while (z.sec>59)
    {
        if(z.sec>59)
        {
            z.min = z.min + 1;
            z.sec = z.sec - 60;
        }
    }
    while(z.min>59)
    {
        if(z.min>59)
        {
            z.hr++;
            z.min = z.min - 60;
        }
    }
    while (z.hr>23)
    {
        if(z.hr>23)
        {
            z.hr = z.hr - 24;
            z.day++;
        }
    }

    return z;
}

void Time :: time_output()
{
    cout << "\nResult is: " << "Day " << day << " " << hr << ":" << min << ":" << sec;
}

int main()
{
    Time x, y, z;
    x.time_input();
    y.time_input();
    z=x+y;
    z.time_output();
    return 0;
}