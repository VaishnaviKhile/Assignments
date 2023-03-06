//5. Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum=0;
    int* p;
    printf("Enter number to store no. of elements : ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("Enter No.: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
    }
    printf("Entered Numbers : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(p+i));
    }
    
    for (int i = 0; i < n; i++)
    {
        sum+=*(p+i);
    }
    printf("\nSum of entered Numbers :%d\n",sum);
    free(p);
    return 0;
}