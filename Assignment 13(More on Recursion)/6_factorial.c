//6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int factorial(int n){
    if (n==1)
    return 1;
    return n*factorial(n-1);
    
}
int main(){
    int n;
    printf("Enter no. find factorial:");
    scanf("%d",&n);
    printf("Factorial of %d : %d",n,factorial(n));
    return 0;
}