//10. Find out the maximum and minimum from an array using dynamic memory allocation in C.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,min,max;
    int* p;
    printf("Enter number of elements to store that elements : ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("Enter No.: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
    }
    printf("Entered Numbers : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(p+i));
    }
    min=*(p+0);
    max=*(p+0);
    for (int i = 1; i < n; i++)
    {
        if (max<*(p+i))
        max=*(p+i);
        if (min>*(p+i))
        min=*(p+i);
    }
    printf("\nMaximum Number : %d\nMinimum Number : %d",max,min);

    return 0;
}