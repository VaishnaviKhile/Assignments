/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDBCA

*/
#include<stdio.h>
int main(){
    int n; 
    char count;
    printf("Enter no.:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {   count='A';
        for (int j = 1; j < 2*n; j++)
        {   if (j>=(n+1-i) && j<=(n-1+i)){
                if (j<=n){
                    printf("%c",count);
                    count++;  
                }
                else{
                        if (j==n+1)
                        count--;
                        count--; 
                        printf("%c",count);
                    }
        } 
            else
            printf(" "); 
        } 
        printf("\n");
    } 
    return 0;
}