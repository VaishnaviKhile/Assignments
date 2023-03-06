//3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.
#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    void get(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    friend Complex operator+(Complex a, Complex b);
};
Complex operator+(Complex x,Complex y)
{
    Complex temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
    return temp;
}
int main(){

    Complex a,b,c;
    a.get(2,3);
    b.get(3,4);
    cout<<"a=";
    a.display();
    cout<<"b=";
    b.display();
    c=a+b;  //operator overloading by friend function
    cout<<"a+b=";
    c.display();

    return 0;
}