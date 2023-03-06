//1.Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
class CheckPrimeNo
{
    int x;
    public:
    CheckPrimeNo(int a){
        x=a;
    }
    void prime(){
        int flag=0;
        for (int i = 2; i <= x/2 ; i++)
        {
            if (x%i==0)
            flag=1;
        }
        flag==0?cout<<"prime no.":cout<<"not a prime no.";
        // if(flag==0) 
        // cout<<"prime no.";
        // else
        // cout<<"not a prime no.";
        
    }
};
int main(){

    int a;
    cout<<"Enter no. to check whether its prime no. or not:";
    cin>>a;
    CheckPrimeNo c(a);
    cout<<a<<" is ";
    c.prime();
    return 0;
}






















































