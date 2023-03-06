//3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int EvenOdd(int );
int main(){
    int n, ans;
    printf("To check number whether it is odd or even\nEnter number: ");
    scanf("%d",&n);
    if (EvenOdd(n)==1)
    printf("%d is even no.",n);
    else
    printf("%d is odd no.",n);
    
    return 0;
}
int EvenOdd(int a)
{
    return (a%2==0);
}