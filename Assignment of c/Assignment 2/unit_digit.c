//Write a program to print unit digit of a given number
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("last digit of %d is %d",a,a%10);
    return 0;
}