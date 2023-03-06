//2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main(){
    int n,a,b,c,count=2;
    printf("Enter Nth term to find Nth term:");
    scanf("%d",&n);
    printf("Enter first number of fibonacci series:");
    scanf("%d",&a);
    printf("Enter second number of fibonacci series:");
    scanf("%d",&b);
    printf("%d %d ",a,b);
    while (1)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        count++;
        if (count==n)
        break; 
    }
    return 0;
}