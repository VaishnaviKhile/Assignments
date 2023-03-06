//9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int CountOfDigit(int n)
{   static int count=0;
    
    if (n==0)
    return count;
    else
    count++;
    CountOfDigit(n/10);

    
}
int main(){
    int n;
    printf("Enter no. to count digit:");
    scanf("%d",&n);
    printf("No. of digit: %d",CountOfDigit(n));
    return 0;
}