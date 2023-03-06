//5. Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main(){
    int n1,n2,i;
    printf("Enter two number to check whether co-prime or not:");
    scanf("%d",&n1);
     scanf("%d",&n2);  
    if (n1<n2)
    {
            for ( i = n1; i >=1; i--)
            {
                if((n1%i==0)&&(n2%i==0))
                break;
            }
            if (i==1)
              printf(" %d and %d are coprime no.",n1,n2);
            else
             printf(" %d and %d are not coprime no.",n1,n2);
    }
    else
    {
        for ( i = n2; i >= 1; i--)
        {
            if ((n1%i==0)&&(n2%i==0))
            break;
            
        }
        if (i==1)
              printf(" %d and %d are coprime no.",n1,n2);
            else
             printf(" %d and %d are not coprime no.",n1,n2);

        
    }

    return 0;
}