//10.Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number no. to print Square no.:");
    scanf("%d",&n);
    for (int i = 1; i <=10; i++)
    {
        printf("%dx%d= %d\n",n,i,(n*i));
        
    } 
    return 0;
}