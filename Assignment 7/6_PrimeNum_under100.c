//6. Write a program to print all Prime numbers under 100
#include<stdio.h>
int main(){
    int n=2,flag;
    printf("All prime number under 100:\n");
    
    while (n<=100)
    {  
        flag=0; 
        for(int i=2; i<n; i++)
      {
        if(n%i==0)
         {
            flag=1;
            break;
         }
      }
      if (flag==0)
      printf("%d ",n);
      n++;

    }
    
       
    
   
    
        return 0;
}