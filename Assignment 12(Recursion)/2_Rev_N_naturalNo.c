//2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void reverse(int n){
    if (n==0)
    return;
    printf("%d\n",n);
    reverse(n-1);
    
}
int main(){
    int n;
    printf("Enter no. to print natural no. in reverse order:");
    scanf("%d",&n);
    printf("Reverse Natural No.:\n");
    reverse(n);
    return 0;
}