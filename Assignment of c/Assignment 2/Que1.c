//1. Write a program to print unit digit of a given number
#include<stdio.h>
int main(){

    int a,x;
    printf("Enter any whole no.: ");
    scanf("%d",&a);
    x=a%10;
    printf("%d is unit digit of %d",x,a);
    return 0;
}