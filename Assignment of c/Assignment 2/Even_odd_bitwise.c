//Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
int main(){
    int a;
    printf("Enter any no.: ");
    scanf("%d",&a);
    (a&1)==1?printf("Odd no."):printf("Even no.");

    return 0;
}