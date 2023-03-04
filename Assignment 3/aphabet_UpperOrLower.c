//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main(){
    char a;
    printf("Enter any character:");
    scanf("%c",&a);
    if ((a>='A') && (a<='Z'))
     printf("%c is in uppercase",a);
    else if ((a>='a') && (a<='z'))
      printf("%c is in lowercase",a);
    
    
    return 0;
}