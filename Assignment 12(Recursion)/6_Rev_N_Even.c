//6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void RevEven(int n){
    
    if (n==0)
    return;
    
    if (n%2==0)
    printf("%d\n",n);
   RevEven(n-1);
}
int main(){
    int n;
    printf("Enter no. to print Even natural no. in reverse order:");

    scanf("%d",&n);
    printf("Even Natural no. in reverse order:\n");
    RevEven(n);
    return 0;
}