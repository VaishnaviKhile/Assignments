//2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{2,3,1},{1,1,2}};
    int b[3][3]={{1,1,3},{2,3,2},{1,1,0}};
    int c[3][3],sum;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum=0;
            for (int k = 0; k < 3; k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
        
    }
    printf("Elements in array a :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
       printf("\n"); 
    }
    printf("\n\nElements in array b :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n\naxb : \n");
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