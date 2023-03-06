/*
*********
 *     *
  *   *
   * *
    *

*/
#include<stdio.h>
int main(){
   int n ,i;
    printf("Enter no.:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j < 2*n; j++)
        {
            if (j==(2*n-i) || j==i || i==1)
            printf("*");
            else
            printf(" ");
            
        }
        printf("\n");
    } 
    
    return 0;
}