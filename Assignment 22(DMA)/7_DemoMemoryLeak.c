//7. Write a program to demonstrate memory leak in C.
#include<stdio.h>
int main(){
    int n;
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
    //memory leak
    printf("Enter length of your name : ");
    scanf("%d",&n);
    p=(char*)malloc(n*sizeof(char));
    printf("Enter ur name : ");
    scanf("%s",(p));
    return 0;
}