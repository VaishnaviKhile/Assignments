#include<iostream>
using namespace std;
// prime no. using function
bool isPrimeNo(int n){
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the no. upto you wanna find out prime no."<<endl;
    cin>>n;
    
    for(int i=2; i<=n; i++)
    { 
        bool isPrime=isPrimeNo(i);
    if(isPrime)
     cout<<i<<" is prime no."<<endl;
    else 
     cout<<i<<" is not a prime no."<<endl;
    }
    // When we wanna check no.from 
    // find prime no. using for loop
    /*bool isPrime=true;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
         isPrime=false;  
         break;
         } 
    }
    if(isPrime)
          cout<<n<<" is prime no."<<endl;
    else
        cout<<n<<" not prime no.";
   */


}
