//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int*a,int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[j]<a[i])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    
}
int main(){
    int a[]={1,5,4,7,4,2,6,8,9};
    printf("Elements in Array : ");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",a[i]);
    }
    sort(a,9);
    printf("\nSorted Array      : ");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}