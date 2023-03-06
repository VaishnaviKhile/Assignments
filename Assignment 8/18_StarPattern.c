/*
    *
   *** 
  *****
 *******
*********
 *******
  *****
   *** 
    *
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter no.:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < 2*n; j++)
        {
            if (j>(n-i) && j<(n+i) )
            printf("*");
            else
            printf(" ");
            
        }
        printf("\n");
    } 
    for (int i=2 ; i <= n; i++)
    {
        for (int j = 1; j < 2*n; j++)
        {
            if (j>=i && j<=2*n-i)
            printf("*");
            else
            printf(" ");
            
        }
        printf("\n");
    } 
    return 0;
}