/* Constructor and Destructor - Passing Object as Parameter - Create a class of name Time and take data members as
hours, mintes and seconds and create objects as X, Y and Z. Hours, minutes and seconds of object X and Y 
should be added and stored in Z and displayed. */

#include<iostream>
using namespace std;

class Time
{
    int hr, min, sec;

    public:
    Time(int , int , int);
    Time();
    void add_time_display(Time, Time);
};

Time :: Time(int i, int j, int k)
{
    hr=i;
    min=j;
    sec=k;
}

Time :: Time()
{

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
    Time X(4, 30, 30), Y(3, 30, 30), Z;
    Z.add_time_display(X, Y);
    return 0;
}