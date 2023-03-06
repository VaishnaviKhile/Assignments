//9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
void Reverse(int *a,int size)
{
    printf("\nElement in Reverse Order : ");
    for (int i = size-1; i >=0; i--)
    {
        printf("%d ",a[i]);
    }
    
}
int main(){
    int a[]={1,5,4,7,4,2,6,8,9};
    printf("Elements in Array : ");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",a[i]);
    }
    Reverse(a,9);
    return 0;
}