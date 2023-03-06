//9. Write a function to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
int CheckDigit(int n, int digit){
    
    while (n!=0)
    {
        if (n%10==digit)
        return 1;
        n=n/10;
       
    }
    return 0;
    
}
int main(){
    int n,digit;
    printf("Enter no.:");
    scanf("%d",&n);
    printf("Enter digit to check whether it is present in %d:",n);
    scanf("%d",&digit);
    if (CheckDigit(n,digit))
    printf("%d is present in %d",digit,n);
    else
    printf("%d is not present in %d",digit,n);
    
    
    return 0;
}