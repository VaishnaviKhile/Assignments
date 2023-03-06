//8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{

   int n;
    printf("Enter number no. to print Square no.:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf("%dx%d= %d\n",i,i,(i*i));
        
    } 
    return 0;
}