//5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
#include<stdio.h>
int FirstOccurance(int a[],int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i]==a[i+1])
        return a[i];
    }
    return 0;
}
int main(){
    int a[10]={2,4,4,46,5,44,5,5,4,44};
    printf("Elements in array : ");
    for (int i = 0; i < 10; i++)
        printf("%d ",a[i]);
    
    
    printf("\nFirst Occurance of Adjacent duplicate value : %d",FirstOccurance(a,10));
    return 0;
}