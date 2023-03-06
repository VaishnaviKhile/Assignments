//7. Write a program to print all Prime numbers between two given numbers

#include<stdio.h>
int main(){
    int n1,n2,flag;
    printf("Enter 2 number to find all prime no.btw them:");
     scanf("%d",&n1);
     scanf("%d",&n2);
    for (int i = n1; i <=n2; i++)
    {    flag=0;
        for (int j = 2; j < i ; j++)
        {
            if (i%j==0)
            {   flag=1;
                break;
            }
            
        }
         if (flag==0)
            printf("%d ",i);
    }
    
      
    
        return 0;
}