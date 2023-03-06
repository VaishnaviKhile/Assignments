//8. Write a program in C to print or display an upper triangular matrix.
#include<stdio.h>
int main(){
    int a[3][3]={1,4,5,2,6,7,3,4,9};
     printf("Elements in 2D array :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
       printf("\n"); 
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i>j)
            a[i][j]=0;
        }
        
    }
     printf("\n\nUpper Matrix  :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
       printf("\n"); 
    }
    
    
    return 0;
}