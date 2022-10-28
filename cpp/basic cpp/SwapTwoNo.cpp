#include<iostream>
using namespace std;
int main(){
    // swapping with 3rd varible
    int a=5 , b= 6;
    int temp=a;
    cout<<"Before swapping a="<<a<<" & b="<<b<<endl;
    a=b;
    b=temp;
    cout<<"After swapping a="<<a<<" & b="<<b;
    
    // swapping without 3rd variable
    int x=8, y=5;
    cout<<"Before swapping a="<<a<<" & b="<<b<<endl;
    x=x+y;//x=13
    y=x-y;//y=8
    x=x-y;//x=5
    cout<<"After swapping a="<<a<<" & b="<<b;

}