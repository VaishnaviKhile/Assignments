/*

*****
****
***
**
*

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter no.:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j<=(n-1-i))
            printf("*");
            
        }
        printf("\n");
    }
    
    return 0;
}