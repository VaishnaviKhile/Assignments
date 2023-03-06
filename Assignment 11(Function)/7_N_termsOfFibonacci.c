//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void Fibonacci(int a,int b,int x){
    int c=0;
    printf("%d %d ",a,b);
    while ((a+b)<=x)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    
    }  
}
int main(){
    int a,b,n;
    printf("Enter 1st term of fibonacci series:");
    scanf("%d",&a);
    printf("Enter 2nd term of fibonacci series:");
    scanf("%d",&b);
    printf("Enter Nth term of fibonacci series:");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    Fibonacci(a,b,n);

    return 0;
}