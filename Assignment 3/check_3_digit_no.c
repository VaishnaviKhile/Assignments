//5. Write a program to check whether a given number is a three digit number or not.
#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter any no.: ");
    scanf("%d",&n);
    if ((n>99 ) && (n<1000))
      printf("%d is three digit no.", n);
     
    else
      printf("%d is not three digit no.",n);
    
    return 0;
}