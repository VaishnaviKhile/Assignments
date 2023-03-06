//6. Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
class Swap
{
   public:
   void swap(int &a,int &b)   //call by reference
   {
        int temp=a;
        a=b;
        b=temp;
        cout<<"\nAfter swapping:\na="<<a<<"\nb="<<b;
   }

};
int main(){
    int a,b; 
    Swap s;
    cout<<"Enter two no.:";
    cin>>a>>b;
    cout<<"Before Swapping:\na="<<a<<"\nb="<<b;
    s.swap(a,b);

    return 0;
}