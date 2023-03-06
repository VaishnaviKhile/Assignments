//4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int NextPrime(int n){
    int flag;
    while (1)
    {
       flag=0;
       for (int i = 2; i <= (n/2); i++)
        {
          if(n%i==0)
         {
          flag=1;
           n++;
         } 
        }
      if (flag==0)
      return n;
    }
    
}
int main(){
    int n;
    printf("Enter no. to find next prime no.:");
    scanf("%d",&n);
    printf("%d is next prime no. of %d ",NextPrime(n),n);
    return 0;
}