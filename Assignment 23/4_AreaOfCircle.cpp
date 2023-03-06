
//4. Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main(){
    int radius;
    cout<<"Enter Radius to calculate area of circle: ";
    cin>>radius;
    cout<<"Area of circle(Radius:"<<radius<<")= "<<3.14*radius*radius;
    return 0;
}