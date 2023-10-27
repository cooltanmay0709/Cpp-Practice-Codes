/* Friend Function - Create a class for Time , and create two objects and take the 
input for hour, minutes and seconds and using friend function add the two objects */

#include<iostream>
using namespace std;

class Time
{
    int hr, min, sec;
    public:
    void input_data();
    friend void time_output(Time, Time);
};

void Time :: input_data()
{
    cout << "\nEnter the Time in hour, minutes and seconds: ";
    cin >> hr >> min >> sec;
}

void time_output(Time x, Time y)
{
    Time z;
    z.hr = x.hr + y.hr;
    z.min = x.min + y.min;
    z.sec = x.sec + y.sec;

    if(z.sec>59)
    {
        z.min=z.min+1;
        z.sec=z.sec-60;
    }
    if(z.min>59)
    {
        z.hr=z.hr+1;
        z.min=z.min-60;
    }
    if(z.hr>23)
    {
        z.hr=0;
        z.min=0;
        z.sec=0;
    }
    cout << "\n" << z.hr << ":" << z.min << ":" << z.sec;
}

int main()
{
    Time x, y;
    x.input_data();
    y.input_data();
    time_output(x, y);
    return 0;
}