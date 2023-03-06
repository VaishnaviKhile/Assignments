//Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);
    printf("Before swapping\na=%d\nb=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("After swapping\na=%d\nb=%d",a,b);
    return 0;
}