//1. Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main(){
    int a[3][3]={1,3,5,5,6,3,4,9,0 };
    int b[3][3]={3,4,2,3,4,2,1,7,8};
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Addition of two matrices: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}