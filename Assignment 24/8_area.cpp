//8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;
    void area(int r)
    {
        cout<<"Area of circle:"<<3.14*r*r;
    }
    void area(int l , int b){
        cout<<"Area of rectagle:"<<l*b;
    }
    void area(float x,float h){
        cout<<"Area of triangle:"<<0.5*x*h;
    }
 

int main(){
    
    int c;
    cout<<"Enter choice to find \n1.Area of circle\n2.Area of rectangle\n3.Area of triangle\n";
    cin>>c;
    switch (c)
    {
    case 1:
        int r;
        cout<<"Enter radius:";
        cin>>r;
        area(r);
        break;
    case 2:
        int l, b;
        cout<<"Enter length and breadth:";
        cin>>l>>b;
        area(l,b);
        break;
    case 3:
        float x,h;
        cout<<"Enter base and height";
        cin>>x>>h;
        
        area(x,h);
        break;
    default:
       cout<<"Please , enter correct no.";
        break;
    }
    return 0;
}