//10. Write a C++ program to add all the numbers of an array of size 
#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,4,5,8},sum=0;
    cout<<"Element of array:";

    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        sum=sum+a[i];
    }
    cout<<"Sum of array element: "<<sum;
    return 0;
}