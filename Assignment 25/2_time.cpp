//2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.
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
    void display(){
        cout<<hour<<" hr "<<min<<" min "<<sec<<" sec";
    }
};
int main(){
    int h,m,s;
    Time t;
    cout<<"Enter hour :";
    cin>>h;
    cout<<"Enter min :";
    cin>>m;
    cout<<"Enter sec :";
    cin>>s;
    t.setTime(h,m,s);
    t.display();
    return 0;
}