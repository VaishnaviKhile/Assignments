/*7. Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1 // Fetch minute from time
t1.display();
m1.display();
return 0;
}
*/
#include<iostream>
using namespace std;
class Minute
{
private:
    int min;
public:
    Minute(){}
    Minute(int a)
    {
        min=a;
    }
    void display()
    {
        cout<<"\nMinutes : "<<min;
    }    
};
class Time
{
    int hour,minute;
    public:
    Time(){}
    Time(int a,int b)
    {
        hour=a;
        minute=b;
    }
    void display()
    {
        cout<<"\nTime  = "<<hour<<":"<<minute;
    }
    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    operator Minute()
    {
        return minute;
    }
};
int main(){
    Time t1(1,30);
    Minute m1;
    m1=t1 ;// Fetch minute from time
    t1.display();
    m1.display();
    return 0;
    return 0;
}