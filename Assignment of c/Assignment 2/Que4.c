//4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main(){
     int a,b;
     printf("Enter two no. that you swap :\na= ");

     scanf("%d",&a);
     printf("b= ");
     scanf("%d",&b);

     b=a+b;
     a=b-a;
     b=b-a;
     printf("swap no. are a= %d and b= %d",a,b);
    return 0;
}