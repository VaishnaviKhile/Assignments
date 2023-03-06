//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int GreatestNum(int a[],int size)
{
    int max=a[0];
    for (int i = 1; i < size; i++)
    {
        if (max<a[i])
        max=a[i];
    }
    return max;
}
int main(){
    int a[10];
    printf("Enter 10 integer : \n");
    for (int i = 0; i < 10; i++)
    scanf("%d",&a[i]);
    printf("Greatest among the entered No. is %d",GreatestNum(a,10));
    
    return 0;
}