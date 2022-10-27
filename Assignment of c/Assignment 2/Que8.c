//Write a program to make the last digit of a number stored in a variable as zero.
#include<stdio.h>
int main(){
    int a,b,c,temp;
    printf("Enter any no.");
    scanf("%d",&a);
    //method 1
    temp=a;
    a=a/10;
    a*=10;
    printf("No. with last digit as 0 is %d",a);
    //method 2
    b=a%10;
    c=a-b;
    printf("\nGiven no. %d with 0 at the end is %d: ",temp,c);

    return 0;
}