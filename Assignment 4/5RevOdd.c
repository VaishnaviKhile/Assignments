//5. Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main(){
    
     printf("First 10 odd natural no. in reverse order:\n");

  for (int i = 20; i >=0; i--)
  {
        if (i%2==1)
        {
            printf("%d\n",i);
        }
        
  }
  
    return 0;
}