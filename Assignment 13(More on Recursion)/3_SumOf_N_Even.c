//3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int Even(int n){
    if (n==2)
    return 2;
    return n+Even(n-2);
    
}
int main(){
    int n;
    printf("Enter no. to calculate sum of first even natural no.:");
    scanf("%d",&n);
    if (n%2!=0)
    n--;
    printf("Sum of all Odd no.:%d",Even(2*n));
    return 0;
}