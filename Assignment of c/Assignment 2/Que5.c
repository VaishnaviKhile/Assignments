//5. Write a program to input a three digit number and display the sum of the digits.
#include<stdio.h>
int main(){
    int a,sum=0,b,c,d;
    printf("Enter any 3 digit no.");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    sum=sum+b;
    c=a%10;
    a=a/10;
    sum=sum+c;
    d=a%10;
    sum=sum+d;
    printf("sum of 3 digit no. is %d",sum);
    return 0;

}