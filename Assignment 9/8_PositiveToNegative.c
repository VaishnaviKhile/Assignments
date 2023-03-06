//8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.to convert number into opposite sign number:");
    scanf("%d",&n);
    switch (n>0)
    {
    case 1:
        printf("Negative number of %d is %d",n,-n);
        break;
    case 0:
        switch (n==0)
        {
        case 1:
            printf("Entered number is 0");
            break;
        
        case 0:
            printf("Positive number of %d is %d",n,-n);
            break;
        }
        break;
    
    default:
        printf("Enter valid number");
        break;
    }
    return 0;
}