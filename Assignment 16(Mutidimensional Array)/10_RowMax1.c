//10. Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main(){
    int a[2][2]={1,2,1,1};
    int b[2]={0};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (a[i][j]==1)
            {
                b[i]++;
            }
            
        }
        
    }
    if (b[0]>b[1])
        printf("Maximum no. 1s in %d row ",b[0]);
    else
    printf("Maximum no. of 1s in %d row",b[1]);
    
    
    
    return 0;
}