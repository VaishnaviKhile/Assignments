//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
void add(int x,int y,int z=0)
{
    cout<<x+y+z;
}
int main(){
    int a,b;
    cout<<"Enter two no. for addition:";
    cin>>a>>b;
    cout<<a<<"+"<<b<<"=";
    add(a,b);
    return 0;
}