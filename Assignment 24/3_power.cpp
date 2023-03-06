//3. Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
class Power
{
     int x,y;
     public:
     Power(int a,int b){
        x=a;
        y=b;
     }
     int power()
     {  int power=1;
        while(y!=0)
        {
            power=power*x;
            y--;
        }
        return power;
     }
};
int main(){
    int a,b;
    cout<<"Enter no. to calculate its power:";
    cin>>a;
    cout<<"Enter power: ";
    cin>>b;
    Power p(a,b);
    cout<<a<<"^"<<b<<"="<<p.power();
    return 0;
}