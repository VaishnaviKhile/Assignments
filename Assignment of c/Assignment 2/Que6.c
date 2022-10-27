//6. Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main(){
    
    char a;
    printf("Enter any character: ");
    scanf("%c",&a);
    printf("ASCII code of %c is %d.",a,a);
    return 0;
}