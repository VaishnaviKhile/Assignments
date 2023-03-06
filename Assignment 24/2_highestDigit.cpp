//2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
class HighestDigit
{ int a;
   public:
   HighestDigit(int x){
    a=x;
   }
   int highestDigit()
   {
        int max=a%10;
        while (a!=0)
        {   a=a/10;
            if (max<(a%10))
            max=a%10; 
        }
        return max;
        
   }
 
};
int main(){
    int a;
    cout<<"Enter no. to check highest digit in no.:";
    cin>>a;
    HighestDigit h(a);
    cout<<"Highest Digit in "<<a<<" is "<<h.highestDigit();
    return 0;
}