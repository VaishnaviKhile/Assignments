//5. Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.
#include<iostream>
using namespace std;
class ReverseNumber
{
    int n;
    public:
    ReverseNumber(int a){
        n=a;
    }

    int reverse()
    {   int rev=0;
        while (n!=0)
        {
            rev=rev*10+n%10;
            n/=10;
        }
        return rev;
    }
};
int main(){
    int a;
    cout<<"Enter no. to find reverse no.: ";
    cin>>a;
    ReverseNumber r(a);
    cout<<"Reverse no. of "<<a<<" is "<<r.reverse();
    return 0;
}