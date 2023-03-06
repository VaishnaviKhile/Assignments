/*2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
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
    Complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void Display()
    {
        cout<<a<<"+"<<b<<"i\n";
    }
    explicit operator int()
    {
        cout<<"int() called\nx = ";
        return a+b;
    }
};
int main(){
    Complex c(4,5);
    cout<<int(c);
    //int x= int (c);
    //cout<<x;
    
    return 0;
}