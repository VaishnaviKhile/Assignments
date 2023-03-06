//10. Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void frequency(int a[],int size)
{
    int hash[100]={0};
    for (int i = 0; i < size; i++)
    {
        hash[a[i]]++;
    }
    printf("Elements with frequency:\n");
    for (int i = 0; i < 100; i++)
    {
        if (hash[i]!=0)
        {
            printf("%d=>%d\n",i,hash[i]);
        }
        
    }
    
    
}
int main(){
    int a[10]={2,4,7,46,5,44,5,6,4,44};
    frequency(a,10);
    return 0;
}