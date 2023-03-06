//3. Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void Odd(int n){
    
    if (n==0)
    return;
       
    Odd(n-1);
    if (n%2!=0)
    printf("%d\n",n);
}
int main(){
    int n;
    printf("Enter no. to print all odd natural no.:");

    scanf("%d",&n);
    printf("Odd Natural no.:\n");
    Odd(n);
    
    return 0;
}