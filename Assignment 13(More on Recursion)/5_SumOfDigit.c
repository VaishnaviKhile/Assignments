//5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int SumOfDigit(int n){
    if (n%10==n)
    return n;
    return (n%10)+SumOfDigit(n/10);
    
}
int main(){
    int n;
    printf("Enter no. to find sum of digit:");
    scanf("%d",&n);
    printf("Sum of Digit Of %d : %d",n,SumOfDigit(n));
    return 0;
}