//Write a program to input a three digit number and display the sum of the digits.
#include<stdio.h>
int main(){
    int a,b, temp;
    printf("Enter any three digit no.: ");
    scanf("%d",&a);
    temp=a;
    b=a%10;
    a=a/10;
    b=b+(a%10);
    a=a/10;
    b=b+(a%10);
    printf("Sum of digit is %d of %d",b,temp);

    
        return 0;
}