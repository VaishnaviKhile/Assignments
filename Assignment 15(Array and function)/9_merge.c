//9. Write a function in C to merge two arrays of the same size sorted in descending order.
#include<stdio.h>
void merge(int a[],int b[],int size)
{
    int c[10];
    int i,j,k=0;
    for ( i = 0,j=0; i < 5 && j<5; k++)
    {
       if (a[i]>b[j])
       {
            c[k]=a[i];
            i++;
       }
       else
       {
            c[k]=b[j];
            j++;
       }
       
    }
    if (i==5 && j!=5)
    {
        for ( ; j < 5; j++)
        c[k++]=b[j];
        
    }
    if (i!=5 && j==5)
    {
        for (; i < 5; i++)
        c[k++]=a[i];
    }
    printf("\nSorted merge Array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",c[i]);
    }
    
    
}
int main(){
    int a[5]={6,5,3,2,2};
    int b[5]={8,6,4,3,1};
    printf("\nElements in 1st array : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nElements in 2nd Array : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",b[i]);
    }
    
    
    merge(a,b,5);
    return 0;
}