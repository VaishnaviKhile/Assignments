#include<iostream>
using namespace std;
int main()
{
    // multiplication table
    // for table of 1
    // then for 1 to n
     int n;
     cout<<"Enter the no. upto you wanna create table:";
     cin>>n;
    for(int x=1; x<=n; x++)
    {
    for(int i=1; i<=10 ; i++)
     {
        cout<<x<<"*"<<i<<"="<<x*i<<endl;
     }
     cout<<endl;
    }
}