#include<iostream>
using namespace std;
int main()
{
    int n, revno=0;
    cout<<"Enter number:";
    cin>>n;
    cout<<"Reverse of "<<n;
    while (n!=0)
    {
        revno*=10;
        revno=revno+n%10;
        n=n/10;
    }
    cout<<" is "<<revno;

}