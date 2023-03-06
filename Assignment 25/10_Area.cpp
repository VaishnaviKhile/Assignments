//10. Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc.
#include<iostream>
using namespace std;
class Area
{
     public:
    void area(float a)
    {
        cout<<"Area of Circle= "<<3.14*a*a;

    }
    void area(int l, int b)
    {
        cout<<"Area of Rectangle= "<<l*b;
    }
    void area(int n)
    {
        cout<<"Area of Square= "<<n*n;
    }
};
int main(){
    int c;
    cout<<"Enter choice to find \n1.Area of circle\n2.Area of rectangle\n3.Area of square\n";
    cin>>c;
    Area a;
    switch (c)
    {
    case 1:
        float r;
        cout<<"Enter radius:";
        cin>>r;
        a.area(r);
        break;
    case 2:
        int l, b;
        cout<<"Enter length and breadth:";
        cin>>l>>b;
        a.area(l,b);
        break;
    case 3:
        int n;
        cout<<"Enter side of square:";
        cin>>n;
        
        a.area(n);
        break;
    default:
       cout<<"Please , enter correct no.";
        break;
    }
    return 0;
}