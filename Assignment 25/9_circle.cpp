//9. Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;
class Circle
{
    float r,area;
    public:
    Circle(int a)
    {
        r=a;
    }
    void Area()
    {
        area=3.14*r*r;
    }
    void print()
    {
        cout<<"Area of circle = "<<area;
    }
};
int main(){
    int a;
    cout<<"Enter radius of circle:";
    cin>>a;
    Circle c(a);
    c.Area();
    c.print();
    return 0;
}