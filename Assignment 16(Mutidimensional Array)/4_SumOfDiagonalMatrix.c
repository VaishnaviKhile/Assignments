//4. Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
int main(){
    int a[3][3]={1,4,5,2,6,7,3,4,9},sum=0;
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
       sum=sum+a[i][i];
    }
    printf("\nSum of Right diagonal : %d\n",sum);
    
    return 0;
}