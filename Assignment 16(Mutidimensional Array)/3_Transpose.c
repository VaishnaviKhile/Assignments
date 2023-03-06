//3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main(){
    int a[3][3]={1,4,5,2,6,7,3,4,9};
    printf("Elements in 2D array a :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
       printf("\n"); 
    }
    printf("Tranpose of 'a' :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }


    return 0;
}