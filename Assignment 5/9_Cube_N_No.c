//9. Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{

   int n;
    printf("Enter number no. to print cube no.:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf("%dx%dx%d= %d\n",i,i,i,(i*i*i));
        
    } 
    return 0;
}