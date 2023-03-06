//6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main(){
    int a[2][2]={1,2,3,4};
    
    int r[2][1],d[3];
    int b[3][3],i,j,sum;
    printf("Elements in Array: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
    
    //for rows
    printf("Sum of rows : \n");
    for ( i = 0; i < 2; i++)
    {
        sum=0;
        for ( j = 0; j < 2; j++)
        {
            sum=sum+a[i][j];
        }
        r[i][1]=sum;
        printf("%d\n",r[i][1]);  
    }
    //for columns
    int c[3][3]={1,2,3,4,5,6,7,8,9};
    printf("\n\n Array Elements  : \n");
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",c[i][j]);

        }
        printf("\n");
    }
    
    printf("\n\nSum of Columns :\n");
    for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j <3; j++)
        {
            b[i][j]=c[j][i];
        }
    
    }
    for (int i = 0; i < 3; i++)
    {   sum=0;
        for (int j= 0; j < 3; j++)
        {
            sum=sum+b[i][j];
        }
        d[i]=sum;
        printf("%d ",d[i]);
    }
    
    return 0;
}