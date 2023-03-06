//7. Write a function in C to count a total number of duplicate elements in an array.(Means elements that occurs 2 times in an array)
#include<stdio.h>
void TotalDuplicate(int a[],int size)
{
    int hash[1000]={0},count=0;
    for (int i = 0; i < size; i++)
    {
        hash[a[i]]++;
    }
    printf("Duplicate Numbers are : ");
    for (int i = 0; i < 1000; i++)
    {
        if (hash[i]==2)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\nTotal Duplicate No. : %d",count);
    
}
int main(){
    int a[10];
    printf("Enter 10 integer : \n");
    for (int i = 0; i < 10; i++)
    scanf("%d",&a[i]);
    TotalDuplicate(a,10);
    return 0;
}