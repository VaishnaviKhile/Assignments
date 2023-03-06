//9. Program to Convert even number into its upper nearest odd number Switch Statement.
#include<stdio.h>
int main(){
    int n;
    printf("Enter no. to check its upper nearest odd no.:");
    scanf("%d",&n);
    
    
    switch (n%2==0)
    {
    case 0:
        printf("%d is upper nearest odd no. of %d ",n+2,n);
        return 0;
        break;
    case 1:
        printf("%d is upper nearest no. of %d",n+1,n);
        break;
    } 
    
    return 0;
    
}