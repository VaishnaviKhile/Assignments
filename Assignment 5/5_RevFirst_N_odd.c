//5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{

    int n;
    printf("Enter number no. to print odd no. in reverse order:");
    scanf("%d",&n);
    for (int i = n; i >=1; i--)
    {
        if (i%2==1)
        {
           printf("%d\n",i);
        }
        
    } 
    return 0;
}
