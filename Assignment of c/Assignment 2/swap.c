//Write a program to swap values of two int variables
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);
    printf("Before swapping\na=%d\nb=%d \n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping\na=%d\nb=%d",a,b);
    return 0;
}