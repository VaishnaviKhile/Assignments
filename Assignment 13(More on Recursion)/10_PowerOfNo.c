//10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int Power(int x, int y)
{   
    if(y==0)
    return 1;
    return x*Power(x,y-1);
}

int main(){
    int x,y;
    printf("Enter no. to calculate power:");
    scanf("%d",&x);
    printf("Enter power:");
    scanf("%d",&y);
    printf("%d^%d= %d",x,y,Power(x,y));
    return 0;
}