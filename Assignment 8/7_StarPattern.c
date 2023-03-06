/*
**********
****  ****
***    ***
**      ** 
*        *


*/
#include<stdio.h>
int main(){
     int n;
    printf("Enter no.:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=2*n; j++)
        {   if (i==1)
            printf("*");
           if (i!=1)
           {
            if ((j<=(n+1-i)) || (j>=(n+i)))
            printf("*");
            else
            printf(" "); 
           }   
            
        }
        printf("\n");
    }
    
    return 0;
}