
//6. Write a C++ program to calculate an average of 3 numbers.

#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter 3 no. to calculate average:";
    cin>>a>>b>>c;
    cout<<"Average of "<<a<<", "<<b<<" & "<<c<<"= "<<(a+b+c)/3;
    return 0;
}