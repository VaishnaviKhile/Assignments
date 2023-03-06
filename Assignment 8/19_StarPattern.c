/*
  *****     *****
 *******   *******
********* *********
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
*/
#include<stdio.h>
int main(){
    int n=5;
    printf("Heart shape pattern:\n ");
    
    
    for (int i = n-2; i >= 1; i--)
    {
      for (int j = 1; j <=4*n; j++)
      {
        if ((j>=i && j<=(2*n-i)) || (j>=(2*n+i) && j<=(4*n-i)))
          printf("*");
        else
          printf(" ");
      }
        printf("\n");
    }
    for (int i = 1; i <=2*n; i++)
    {
      for (int j = 1; j < 4*n; j++)
      {
        if (j>=i && j<=4*n-i)
            printf("*");
        else
            printf(" ");
        
      }
     printf("\n");
    }
    
    
    return 0;
}
