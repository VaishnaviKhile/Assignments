//2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main(){
    int a,x;
    printf("Enter any whole no.: ");
    scanf("%d",&a);
    x=a/10;
    printf("%d is no. of %d without last digit",x,a);
    return 0;
}