// 3. Write a program to swap values of two int variables
#include<stdio.h>
int main(){
    int a,b,x;
    printf("Enter two no. that u wanna swap:\na= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b); 
    x=a;
    a=b;
    b=x;
    printf("a= %d , b= %d",a,b);
    return 0;

}