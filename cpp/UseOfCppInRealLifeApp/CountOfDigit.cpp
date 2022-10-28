#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any no.";
    cin>>n;
    if (n==0)
    {
        cout<<"You've entered 0 no.";
    }
    else
    {
        // 123/10 until dividendo become 0
        // couter value will increment everytime
        if(n<0)// if no. is negatives
         n=n*-1;
        int counter=0;
        while (n>0)
        {
            n=n/10;
            counter++;
        }
        cout<<"Number contains "<<counter<<" digit";
    }
    
}