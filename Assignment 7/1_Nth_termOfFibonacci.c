//1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main(){
    int n,a,b,c,count=2;
    printf("Enter Nth term to find Nth term:");
    scanf("%d",&n);
    printf("Enter first number of fibonacci series:");
    scanf("%d",&a);
    printf("Enter second number of fibonacci series:");
    scanf("%d",&b);
    
    while (1)
    {
        c=a+b;
        
        a=b;
        b=c;
        count++;
        if (count==n)
        break; 
    }
    
    printf("Nth term of fibonacci series is %d",c);
    
    return 0;
}