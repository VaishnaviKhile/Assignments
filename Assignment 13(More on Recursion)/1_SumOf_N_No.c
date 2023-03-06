//1. Write a recursive function to calculate sum of first N natural no.
#include<stdio.h>
int Sum(int n){
    //  int static sum=0;
    if (n==1)
    return 1;
    // sum=n+Sum(n-1);
    // // Sum(n-1);
    // return sum;
    return n+Sum(n-1);
    
}
int main(){
    int n;
    printf("Enter no. to calculate sum of first natural no.:");
    scanf("%d",&n);
    printf("Sum of first %d : %d",n,Sum(n));
    return 0;
}