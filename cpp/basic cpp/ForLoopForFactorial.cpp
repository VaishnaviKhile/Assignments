#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. that you wanna find out factorial:";
    cin>>n;
     int fact=1;
    // for (int i = 1; i <= n; i++)
    // {
        
    //     fact*=i;
    // }
   
//    Using for loop in reverse loop
for(int j=n;j>=1;j--)
{
    fact=fact*j;
}
    cout<<fact;

} 