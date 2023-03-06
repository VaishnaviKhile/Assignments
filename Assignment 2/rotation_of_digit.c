//Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main(){
    int a ;
    printf("Enter any three digit no.: ");
    scanf("%d",&a);
    printf("Before rotating no.:%d\n",a);
   a= (((a%10) *100) + (a/10));
   printf("After rotating digit one position towards right is %d",a);
    return 0;
}