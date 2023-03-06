//4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter no. for summation of square of Number :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
            sum+=(i*i);
    }
    printf("%d\n",sum);


    return 0;
}