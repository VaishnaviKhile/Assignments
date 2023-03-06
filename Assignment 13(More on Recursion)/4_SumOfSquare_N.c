//4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int Square(int n){
    if (n==1)
    return 1;
    return (n*n)+Square(n-1);
}
int main(){
    int n;
    printf("Enter no. find sum of Square of no.: ");
    scanf("%d",&n);
    printf("Sum of Square of first %d: %d",n,Square(n));
    return 0;
}