//Write a program to print a given number without its last digit.
#include<stdio.h>
int main(){

    int a;
    printf("Enter a no.:");
    scanf("%d",&a);
    printf("%d without last digit is %d",a,a/10);
    return 0;
}