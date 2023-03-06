//8. Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main(){
    int n,flag=0;
    printf("Enter no. to check no. is prime or non prime :");
    scanf("%d",&n);
    for (int i = 2; i <= (n/2); i++)
    {
            if (n%i==0)
            {
                flag=1;
                break;
            }
            
    }
    if (flag==0)
        printf("%d is a prime no.",n);
    else
        printf("%d is non prime no.",n);

    return 0;
}