/*1. Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator*/
#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    friend ostream& operator<<(ostream &a, Complex &b);
    friend istream& operator>>(istream &a, Complex &b);
    
};
 istream& operator>>(istream &a, Complex &x)
 {  cout<<"Enter Complex no. : ";
    cout<<"\nreal no.    : ";
    cin>>x.a;
    cout<<"Imaginary no.  : ";
    cin>>x.b;
    return cin;
 }
ostream& operator<<(ostream &a, Complex &x)
{
    cout<<"\nComplex No.  : "<<x.a<<"+"<<x.b<<"i\n";
    return cout;
    
}
int main(){
    Complex a;
    cin>>a;
    cout<<a;
    return 0;
}