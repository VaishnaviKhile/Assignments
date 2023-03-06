//6. Write a program to calculate factorial of a number
#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter no. to calculate factorial :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
            fact*=i;
    }
    printf("%d\n",fact);

    return 0;
}