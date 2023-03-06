//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int factorial(int num){
    int fact=1;
    for (int i = 1; i <= num; i++)
    fact=fact*i;
    return fact;
}
void SumOfSeries(int n){
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+(factorial(i)/i);
    }
    printf("Sum of Series: %d",sum);
}
int main(){
    int n;
    printf("Enter natural no. to find Sum of Series(1!/1+2!/2+3!/3+4!/4):");
    scanf("%d",&n);
    SumOfSeries(n);
    return 0;
}