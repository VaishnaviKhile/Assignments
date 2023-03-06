//6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void Even(int n){
    
    if (n==0)
    return;
    Even(n-1);
    if (n%2==0)
    printf("%d\n",n);
   
}
int main(){
    int n;
    printf("Enter no. to print all Even natural no.:");

    scanf("%d",&n);
    printf("Even Natural no.:\n");
    Even(n);
    return 0;
}