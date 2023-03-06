//4. Write a program to print the first 10 odd natural numbers
#include<stdio.h>
int main(){
     int i=1,count=0;
     printf("First 10 odd natural no.:\n");

  while(1){
    
        if (i%2==1)
         { printf("%d\n",i);
            count++;
         } 
        if(count==10)
         break;
        i++;
        
  }
      
    
    return 0;
}