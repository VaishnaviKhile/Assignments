//1. Write a recursive function to print first N natural numbers
#include<stdio.h>
void natural(int n){
    if (n==0)
    return;
    natural(n-1);
    printf("%d\n",n);   
}
int main(){
    int n;
    printf("Enter no. to print all natural no.:");
    scanf("%d",&n);
    printf("All natural no.:\n");
    natural(n);

    return 0;
}