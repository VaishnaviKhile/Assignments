//1. Write a program to check whether a given number is positive or non positive.
#include<stdio.h>
int main(){
    int a;
    printf("Enter any no.: ");
    scanf("%d",&a);
    if (a>=0)
      printf("%d is a positive no.",a);
    else
      printf("%d is non-positive",a);
    
    return 0;
}