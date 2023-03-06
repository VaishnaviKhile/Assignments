//3. Write a function to sort an array of any size. (TSRN)
#include<stdio.h>
void sort(int a[],int size)
{   int temp;
    for (int i = 0; i < (size-1); i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }  
        } 
    }
    printf("Sorted array Elements:  \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    
}
int main(){
    int a[10];
    printf("Enter 10 integer : \n");
    for (int i = 0; i < 10; i++)
    scanf("%d",&a[i]);
    sort(a,10);
    return 0;
}