//Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main(){
    char a;
    printf("Enter any character: ");
    scanf("%c",&a);
    printf("Entered character : %c\n",a);
    printf("ASCII code: %d",a);
    return 0;
}