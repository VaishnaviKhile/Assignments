/*6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e int )
to Time class.

Example-
int main()
{
int duration;
cout<<”Enter time duration in minutes”;
cin>>duration;
Time t1 = duration;
t1.display();
return 0;
}
*/
#include<iostream>
using namespace std;
class Time
{
    int hour,minute;
    public:
    Time(){}
    Time(int duration)
    {
        hour=duration/3600;
        minute=(duration%3600)/60;
    }
    void display()
    {
        cout<<"\nhour   : "<<hour<<"\nMinute : "<<minute;
    }
};
int main(){
    int duration;
    cout<<"Enter time in seconds  : \n";
    cin>>duration;
    Time t1 = duration;
    t1.display();
    return 0;
}