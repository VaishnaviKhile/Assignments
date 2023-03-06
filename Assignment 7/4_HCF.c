//4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main(){
    int n1,n2,i;
    printf("Enter two number to calculate HCF:");
    scanf("%d",&n1);
     scanf("%d",&n2);

    if (n1<n2)
    {
        for ( i = n1; i >= 1; i--)
        {
            if ((n2%i==0) && (n1%i==0))
                break;   
        }
        printf("HCF of %d and %d is %d",n1,n2,i);
    }
    else
    {
        for ( i = n2; i >=1; i--)
        {
            if ((n1%i==0) && (n2%i==0))
            break;
            
        }
        printf("HCF of %d and %d is %d",n1,n2,i);
    }
    return 0;
}