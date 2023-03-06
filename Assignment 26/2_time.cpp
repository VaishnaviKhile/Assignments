/*2. Define a class Time to represent a time with instance variables h,m and s to store hour,
minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)*/
#include<iostream>
using namespace std;
class Time
{
    int hour,min,sec;
    public:
    void setTime(int h,int m,int s)
    {
        hour=h;
        min=m;
        sec=s;
    }
    void showTime()
    {
        cout<<hour<<":"<<min<<":"<<sec;
    }
    void normalize()
    {
        min=min+sec/60;
        sec=sec%60;
        hour=hour+min/60;
        min=min%60;
    }
    Time add(Time t)
    {
        Time temp;
        temp.hour=hour+t.hour;
        temp.min=min+t.min;
        temp.sec=sec+t.sec;
        temp.normalize();
        return temp;

    }
};
int main(){
    Time t1,t2,t3;
    t1.setTime(4,30,50);
    t2.setTime(2,40,50);
    cout<<" ";
    t1.showTime();
    cout<<"\n+";
    t2.showTime();
    cout<<"\n--------\n";
    t3=t1.add(t2);
    t3.showTime();
    return 0;
}