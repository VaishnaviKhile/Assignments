/*1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
Complex c1;
Int x=5;
c1=x;
return 0;
}
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
    Complex(int x)
    {
        a=x;
        b=x;
    }
    Complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void Display()
    {
        cout<<"Real   = "<<a<<"\nImaginary ="<<b;
    }
 
};
int main(){
    Complex c=5;
    c.Display();
    return 0;
}