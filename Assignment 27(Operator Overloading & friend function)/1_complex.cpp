/*1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include<iostream>
using namespace std;
class Complex
{
    int a, b;
    public:
    Complex()
    {

    }
    Complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void Display()
    {
        cout<<a<<"+"<<b<<"i\n";
    }
     
     Complex operator+(Complex c)
     {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
     }
     Complex operator-(Complex c)
     {
        Complex temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return temp;
     }

    Complex operator*(Complex c)
    {
        Complex temp;
        temp.a=a*c.a;
        temp.b=b*c.b;
        return temp;
    }
    bool operator==(Complex c)
    {
        if (a==c.a && b==c.b)
        return true;
        else
        return false;
    }

};
int main(){
    Complex c1(2,3),c2(5,6),c3,c4,c5;
    bool a;
    cout<<"c1=";
    c1.Display();
    cout<<"c2=";
    c2.Display();
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    cout<<"c1+c2=";
    c3.Display();
    cout<<"\nc1-c2=";
    c4.Display();
    cout<<"\nc1+c2=";
    c5.Display();
    a=c1==c2;
    cout<<"\nc1==c2: "<<a;
    
    return 0;
}