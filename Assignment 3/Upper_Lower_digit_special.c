//16. Write a program to check whether a given character is an alphabet (uppercase), a alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number to check it's ASCII code:");
    scanf("%d",&n);
    if(n<256)
    {
    if (65<n<90)
        printf("ASCII code of %d id %c & It is in Uppercase",n,n);
    else if(97<n<122)
        printf("ASCII code of %d id %c & It is in lowercase",n,n);
    else if (48<n<57)
        printf("ASCII code of %d id %c & It is digit",n,n);
    else
        printf("ASCII code of %d id %c & It is a special character",n,n);
    }
    else
    {
        printf("Enter valid no.");
        printf("No. should be in range from 0 to 256");
    }
    
    return 0;
}