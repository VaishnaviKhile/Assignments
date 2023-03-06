//8. Write a function in C to print all unique elements in an array.
#include<stdio.h>
void PrintUnique(int a[],int size)
{
    int hash[10000]={0};
    for (int i = 0; i < size; i++)
    {
        hash[a[i]]++;
    }
     printf("Unique Elements are : ");
    for (int i = 0; i < 1000; i++)
    {
        if (hash[i]==1)
            printf("%d ",i);
    }
    
}
int main(){
    int a[10]={2,4,7,46,5,44,5,6,4,44};
    PrintUnique(a,10);
    return 0;
}