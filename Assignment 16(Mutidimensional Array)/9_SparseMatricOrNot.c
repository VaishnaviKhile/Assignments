//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main(){
    int a[3][3],count=0;
    printf("Enter elements in 3x3 matrix :  \n");
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);           
        } 
    }
    printf("\n\nEntered matrix : \n");
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
            if (a[i][j]==0)
            count++;            
        } 
    }
   

    if (count>((3*3)/2))
    printf("\n\nAbove matrix is sparse matrix");
    else
    printf("\n\nAbove matrix is dense matrix");
    
    
    return 0;
}
