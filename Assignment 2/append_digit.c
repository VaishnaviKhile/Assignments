//Write a program to input a number from the user and also input a digit. Append adigit in the number and print the resulting number.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a no.: ");
    scanf("%d",&a);
    printf("Enter digit u wanna append: ");
    scanf("%d",&b);
    a=((a/10)*10)+b;
    printf("Number after appending %d is %d",b,a);

    return 0;
}