//6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,LargestElem;
    int* p;
    printf("How many numbers u wanna enter : ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter No.:\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
    }
    LargestElem=*(p+0);
    for (int i = 1; i < n; i++)
    {
        if(LargestElem<p[i])
        LargestElem=*(p+i);
    }
    printf("\nLargest Number among entered Numbers :%d\n",LargestElem);
    free(p);

    return 0;
}