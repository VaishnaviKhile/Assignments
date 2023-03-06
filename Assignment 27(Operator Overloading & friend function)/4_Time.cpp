/*4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.
*/
#include<iostream>
using namespace std;
class Time
{
    
    public:
    int h,m,s;
    bool operator==(Time c)
    {
        if(h==c.h && m==c.m && s==c.s)
        return true;
        else
        return false;
    }
    
    friend istream& operator>>(istream &i, Time &t);
    friend ostream& operator<<(ostream &o, Time &t);
 
};

istream& operator>>(istream &i, Time &t)
{
    cout<<"Enter Hours   :   ";
    cin>>t.h;
    cout<<"\nENter Minutes :   ";
    cin>>t.m;
    cout<<"\nEnter Second  :   ";
    cin>>t.s;
    return cin;
}
ostream& operator<<(ostream &o, Time &t)
{
    cout<<"\n\nHour  : "<<t.h<<"\n\nMinute: "<<t.m<<"\n\nSecond : "<<t.s<<endl;
    return cout;
}

int main(){
    Time a,b;
    cout<<"Enter First Time\n-----------------------"<<endl;
    cin>>a;
    cout<<a;
    cout<<"\n\nEnter Second Time\n-----------------------"<<endl;
    cin>>b;
    cout<<b;
    if (a==b)
    cout<<"\n\nTime are same";
    else
    cout<<"\n\nTime are not same";
    
    return 0;
}