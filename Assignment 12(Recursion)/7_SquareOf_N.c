//7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void square(int n){
    if (n==0)
    return;
    square(n-1);
    printf("%d^2 =%d\n",n,n,(n*n));
    
}

int main(){
    int n;
    printf("Enter no. to print Square of all natural no.:");
    scanf("%d",&n);
    printf("Square of all Natural No.:\n");
    square(n);
    return 0;
}