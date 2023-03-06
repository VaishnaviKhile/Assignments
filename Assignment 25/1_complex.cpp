//Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number
#include<iostream>
using namespace std;
class Complex
{
    int a,b,i;
    public:
    void SetComplex(int x, int y){
        a=x;
        b=y;
    }
    void print(){
        cout<<"Complex no.:"<<a<<"+"<<b<<"i";
    }
};
int main(){
    int a,b;
    Complex c;
    cout<<"Enter real no.:";
    cin>>a;
    cout<<"Enter imaginary no.:";
    cin>>b;
    c.SetComplex(a,b);
    c.print();
    return 0;
}