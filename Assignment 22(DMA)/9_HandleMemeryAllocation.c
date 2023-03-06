//9. Write a program to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation is failed.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int* p;
    printf("Enter size to store no. of elements : ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("Memory Allocation failed....");
    }
    else
    {
    printf("Enter No.:\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
    }
    printf("Entered Numbers : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(p+i));
    }
    }
    return 0;
}