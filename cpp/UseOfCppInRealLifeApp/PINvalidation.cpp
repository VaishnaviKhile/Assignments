#include<iostream>
using namespace std;
int main()
{
    int UserPin=1234,pin,counter=0;
    cout<<"You have 3 chances to get correct pin"<<endl;
    
    while (UserPin!=pin && counter<3)
    {
        cout<<"Enter PIN:";
        cin>>pin;
        if(pin!=UserPin)
         counter++;

    }
    if(counter<3)//no need of check pin==UserPin cuz
    //in while condn true then we will reach on if cond
     cout<<"Loading....";
    else
      cout<<"Blocked.....";
    

}