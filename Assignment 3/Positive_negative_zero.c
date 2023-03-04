//15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main(){
    int a;
    printf("Enter any no.:");
    scanf("%d",&a);
    switch (a>=0)
    {
    case 0:
        printf("%d is negative",a);
        break;
    case 1:
        switch (a>0)
        {
        case 0:
            printf("%d is zero no.",a);
            break;
        
        case 1:
            printf("%d is positive no.",a);
            break;
        }
       break;
    default:
     printf("Enter valid number");
        break;
    }

    return 0;
}