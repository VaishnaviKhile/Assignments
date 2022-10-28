#include<iostream>
using namespace std;
int main()
{
    // write no.divisible by 3& 5 in range 100-500
   int counter=100;
   cout<<"Number divisible by 3 and 5"<<endl;
   while ( counter<=500)
   {
      if(counter%3==0 && counter%5==0)
      {
        cout<<counter<<endl;
    
      }
      counter++;
   }
   



} 

