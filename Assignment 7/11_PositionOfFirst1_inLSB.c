//11. Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main(){
    int n, count=0;
    printf("Enter a number to find position of first 1 in LSB:");
    scanf("%d",&n);
    while (n!=0)
    {   count++;
        if(n&1==1){
            printf("position of first LSB is at %d",count);
            break;
        }
        n= n>>1;       
    }
    if (n==0 )
        printf("There is no 1 bit in 0");
    
    
    return 0;
}