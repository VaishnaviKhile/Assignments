//2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int Odd(int n){
    if (n==1)
    return 1;
    
    return n+Odd(n-2);
   
    
}
int main(){
    int n;
    printf("Enter no. to calculate sum of first odd no.:");
    scanf("%d",&n);
    
    printf("Sum of first %d odd no. :",n);
    printf("%d",Odd(2*n-1));
    return 0;
}