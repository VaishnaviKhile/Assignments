//8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int SumOfEle(int *a,int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
        sum+=a[i];
    
    return sum;
}
int main(){
    int a[]={1,5,4,7,4,2,6,8,9};
    printf("Elements in Array : ");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nSum Of Elements : %d",SumOfEle(a,9));
    
    return 0;
}