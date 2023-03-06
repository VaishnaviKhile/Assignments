/*
    1
   121
  12321
 1234321

*/
#include<stdio.h>
int main(){
    int n, count;
    printf("Enter no.:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
            count=0;
        for (int j = 1; j <2*n; j++)
        {   
            if(j>=(n-i+1) && j<=n+i-1)
            {
                if(j<=n)
                {   count++;
                    printf("%d",count);
                }
                else
                {
                    count--;
                    printf("%d",count);
                } 
            }
             else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}