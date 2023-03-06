//9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
int square(int n){
return n*n;
}
int main(){
    int n;
    printf("Enter no. to find square:");
    scanf("%d",&n);
    printf("Square of %d is %d",n,square(n));
    return 0;
}