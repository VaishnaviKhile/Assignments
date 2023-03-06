//3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum=0;
    int* p;
    printf("How many numbers u wanna enter : ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter No.: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
    }
    for (int i = 0; i < n; i++)
    {
        sum+=*(p+i);
    }
    printf("\nSum of entered Numbers :%d\n",sum);
    free(p);
    return 0;
}