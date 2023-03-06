//10. Write a program to reverse a given number
#include<stdio.h>
int main(){
    int n, sum=0, temp;
    printf("Enter a no. to reverse the no.:");
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        sum=(sum*10)+(n%10);
        n=n/10;
    }
    printf("Reverse no. of %d is %d",temp,sum);    
    return 0;
}