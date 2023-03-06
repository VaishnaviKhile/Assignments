//1. Write a function to swap values of two in variables of calling function.
#include<stdio.h>
void swap(int* a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("Enter two no.: ");
    scanf("%d %d",&a,&b);
    printf("Before Swapping  : \na=%d  b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter Swapping  : \na=%d  b=%d",a,b);
    return 0;
}