//3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main(){
    int a,b,c,Num,flag=0;
    printf("Enter Number to check whether no. is present or not:");
    scanf("%d",&Num);
    printf("Enter first number of fibonacci series:");
    scanf("%d",&a);
    printf("Enter second number of fibonacci series:");
    scanf("%d",&b);
    while (1)
    {
        c=a+b;
        a=b;
        b=c;
        if (c==Num)
        {
            flag=1;
            break;
        }
        if (c>Num)
         break;

    }
    if (flag==1)
        printf("Yes, %d is present in fibonacci series:",Num);
    else
     printf("No, %d is not present in fibonacci series",Num);
    

    return 0;
}