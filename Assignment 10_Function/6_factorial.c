//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int factorial(int p){
    int fact=1;
    for (int i = 1; i <= p; i++)
        fact=fact*i;
    return fact;
    
}
int main(){
    int n;
    printf("Enter no. to calculate factorial:");
    scanf("%d",&n);
    if (n>=0)
    {
       printf("Factorial of %d is %d",n,factorial(n)); 
    }
    
    

    return 0;
}