//7. Define a class Box and write a program to enter length, breadth and height and initialise objects using constructor also define member functions to calculate volume of the box.
#include<iostream>
using namespace std;
class Box
{
    double l,b,h,volume;
    public:
    Box(double x,double y,double z)
    {
        l=x;
        b=y;
        h=z;
        volume=l*b*h;
    }
    void vol()
    {
        cout<<"length:"<<l<<endl;
        cout<<"breadth:"<<b<<endl;
        cout<<"height:"<<h<<endl;
        cout<<"Volume of Box:"<<volume;

    }
};
int main(){
    Box b(3,4,5);
    cout<<"Dimension of Box:\n";
    b.vol();
    return 0;
}