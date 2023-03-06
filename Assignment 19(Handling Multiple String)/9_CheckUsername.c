//9. Write a program that asks the user to enter a username. If the username entered is one of the names in the list then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed.
#include<stdio.h>
#include<string.h>
int factorial(int a)
{
    int fact=1;
    for (int i = 2; i <= a; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main(){
    char a[][20]={"Vaishnavi","Miri Chan","Danielle","kazua","anaya"},b[20]="Vaishnavi";
    int flag;
    printf("Enter your name : ");
    gets(b);
    //scanf("%s",b);
    
    for (int i = 0; i < 5; i++)
    {
        
         flag=0;
        if (strcmp(b,a[i])==0)
        {
            int n;
            printf("Enter any number to find factorial of number : ");
            scanf("%d",&n);
            printf("\n%d! = %d",n,factorial(n));
            break;
        }
        else
        flag=1;
        
    }
    if (flag==1)
    {
        printf("Error...\nPlz enter Correct name");
    }
    
    return 0;
}