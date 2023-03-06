//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter no. for summation of odd Number :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (i%2==1)
            sum+=i;
    }
    printf("%d\n",sum);

    return 0;
}