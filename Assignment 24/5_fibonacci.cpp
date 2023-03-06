//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
class Fibonacci
{
    int n;
    public:
    Fibonacci(int x){
        n=x;
    }
    void CheckInFibonacci(int a, int b){
        int flag=0,c;
        while(1)
        {
            c=a+b;
            a=b;
            b=c;
            if (c>n)
            break;
            if (c==n)
            {
                flag=1;
                break;
            }
            
        }
        flag==1?cout<<"present":cout<<"not present";
    }
 
};
int main(){
    int a,b,n;
    cout<<"Enter 1st no. of fibonacci series:";
    cin>>a;
    cout<<"Enter 2nd no. of fibonacci series:";
    cin>>b;
    cout<<"Enter no. to check whether it is present in fibonacci series:";
    cin>>n;
    Fibonacci f(n);
    cout<<n<<" is ";
    f.CheckInFibonacci(a,b);
    cout<<" in fibonacci series";

    return 0;
}