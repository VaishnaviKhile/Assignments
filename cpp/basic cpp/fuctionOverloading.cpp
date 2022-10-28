#include<iostream>
using namespace std;
// function overloading means same function for different parameter
int sum(int a, int b);
// I don't know why but if I declare sum(float) before
// sum(double) it always give error
double sum(double a, double b);
float sum(float a ,float b, float c );
int main(){
     cout<<sum(3,4)<<endl;
     cout<<sum(3.35,3.33)<<endl;
     cout<<sum(3.4,3.5,6.7)<<endl;
}
int sum(int a, int b){
    return a+b;
}
float sum(float a, float b, float c){
    return a+b+c;
}
double sum(double a, double b){
    return a+b;
}