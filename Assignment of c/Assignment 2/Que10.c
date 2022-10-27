//10. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter any no.: ");
    scanf("%d",&a);
    printf("Enter digit that u wanna append at end of %d: ",a);
    scanf("%d",&b);
    temp=a;
    a/=10;
    a*=10;
    a+=b;
    printf("%d with appended digit is %d",temp,a);
    return 0;
}