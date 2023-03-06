//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int CheckPrime(int n){
    for (int i = 2; i <=(n/2); i++)
    {
        if (n%i==0)
         return 0;  
    }
    return 1;
    
}
int main(){
    int num;
    printf("Enter no. to check whether it is prime no. or not:");
    scanf("%d",&num);
    if (CheckPrime(num))
    printf("%d is a prime no.",num);
    else
    printf("%d is not prime no.",num);
    
    return 0;
}