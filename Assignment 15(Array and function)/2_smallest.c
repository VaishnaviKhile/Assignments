//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int SmallestNum(int a[],int size)
{
    int min=a[0];
    for (int i = 1; i < size; i++)
    {
        if (min>a[i])
        min=a[i];
    }
    return min;
}
int main(){
    int a[10];
    printf("Enter 10 integer : \n");
    for (int i = 0; i < 10; i++)
    scanf("%d",&a[i]);
    printf("Smallest among the entered No. is %d",SmallestNum(a,10));
    
    return 0;
}