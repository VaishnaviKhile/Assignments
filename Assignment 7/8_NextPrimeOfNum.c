//8. Write a program to find next Prime number of a given number

#include<stdio.h>
int main(){
    int n, flag=0;
    printf("Enter the number to find next prime no.:");
    scanf("%d",&n);
    n++;
   
    while (1)
    {   flag=0;

        for (int i = 2; i < n; i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
         if(flag==0)
         {
            printf("%d",n);
            break;
         } 
         n++;
    }
    
    
    return 0;
}