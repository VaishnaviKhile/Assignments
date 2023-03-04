//6. Write a program to print greater between two numbers. Print one number if both are the same.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two no.:");
    scanf("%d %d",&a,&b);
    if (a<b)
        printf("%d is greater than %d",b,a);
    else if (a==b)
        printf("Enter numbers are %d,%d Both are same",a,b);
    else
        printf("%d is greater than %d",a,b);
    
    
    return 0;
}