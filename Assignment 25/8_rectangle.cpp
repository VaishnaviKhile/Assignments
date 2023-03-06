//8. Define a class Rectangle and define an instance member function to find the area of the rectangle.
#include<iostream>
using namespace std;
class Rectangle
{
    int l,b,area;
    public:
    Rectangle(int a, int y)
    {
        l=a;
        b=y;
    }
    void Area()
    {
        area=l*b;
    }
    void print()
    {
        cout<<"Area of Rectangle = "<<area;
    }
};
int main(){
    int a,b;
    cout<<"Enter length and breadth of rectangle:";
    cin>>a>>b;
    Rectangle r(a,b);
    r.Area();
    r.print();
    return 0;
}