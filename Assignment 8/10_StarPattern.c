/*
1234321
123 321
12   21
1     1

*/
#include<stdio.h>
int main(){
    int n,count;
    printf("Enter no.:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {   count=0;
        for (int j = 1; j < 2*n; j++)
        {   if (j<=(n+1-i) || j>=(n-1+i)){
                if (j<=n){
                    count++;
                    printf("%d",count);
                }
                else{
                    if (i==1 && j==n+1)
                        count--; 
                        printf("%d",count);
                        count--;
                    }
        } 
            else
            printf(" "); 
        } 
        printf("\n");
    } 
    return 0;
}