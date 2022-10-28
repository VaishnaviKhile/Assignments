#include<iostream>
using namespace std;
int main()
{
    // priority arithmatic>relational>logical>assignment
    // arithmatic operator
    // +,-,*,/,%
    cout<<4+5<<endl;
    cout<<5-3<<endl;
    cout<<8*2<<endl;
    cout<<6/5<<endl;// result in whole no.
    cout<<5.5/5<<endl;
    cout<<7%4<<endl;

    // unary operator- ++,--
    int a=4;
    cout<<a++<<endl;//post increment
    cout<<++a<<endl;//pre increment
    int b=5;
    cout<<b--<<endl;//post decrement
    cout<<--b<<endl;//pre decrement

    // relational operator
    // <,>,<=,>=,==,!=
    int c=5, d=5;
    cout<<(c<d)<<endl;
    cout<<(c<=d)<<endl;
    cout<<(c>d)<<endl;
    cout<<(c>=d)<<endl;
    cout<<(c==d)<<endl;
    cout<<(c!=d)<<endl;

    // logical operator 
    // &&,||,!
    cout<<(c=5 && c==d)<<endl;
    cout<<(c=5 || c==5+4)<<endl;
    cout<<(!(c==5))<<endl;

    // assignment operator
    // =,-=,+=,*=,/=,%=
    int x=5;
    x+=6;//x=x+6
    cout<<x<<endl;
    x-=5;//x=x-5
    cout<<x<<endl;
    x*=2;
    cout<<x<<endl;
    }