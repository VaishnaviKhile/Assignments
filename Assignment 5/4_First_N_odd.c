//4. Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
   int n;
    printf("Enter number no. to print odd no.:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if (i%2==1)
        {
           printf("%d\n",i);
        }
        
    } 
    return 0;
}