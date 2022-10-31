//7. Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
int main(){
    int a;
    printf("Enter any no. to check whether it's even or odd:");
    scanf("%d",&a);
    (a&1)==0?printf("Even no."):printf("Odd no.");
    return 0;
}