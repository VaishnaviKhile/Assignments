//4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void Odd(int n){
    
    if (n==0)
    return;
    if (n%2!=0)
    printf("%d\n",n);
    Odd(n-1);
}
int main(){
    int n;
    printf("Enter no. to print all odd natural no. in Reverse order:");

    scanf("%d",&n);
    printf("Odd Natural no. in Reverse order:\n");
    Odd(n);
    
    return 0;
}