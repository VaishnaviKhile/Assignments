//1. Write a program to print iNeuron N times on the screen
#include<stdio.h>
int main()
{
    int n;
    printf("How many times u wanna print iNeuron:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d.iNeuron\n",i);
    }
    
    
    return 0;
}