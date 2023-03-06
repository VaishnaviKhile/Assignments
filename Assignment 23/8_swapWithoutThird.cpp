//8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main(){
    int a=4, b=5;
    cout<<"Before swapping a="<<a<<" b="<<b<<endl;
    a=a+b;   //a=9
     b=a-b;   //b=9-5=>b=4
     a=a-b;
    cout<<"After Swapping a="<<a<<" b="<<b;
    return 0;
}