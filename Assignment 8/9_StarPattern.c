/*
1234321
 12321
  121
   1

*/
 #include<stdio.h>
 int main(){
     int n,count;
    printf("Enter no.:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {    count=0;
        for (int j = 0; j <2*n; j++)
        {   
          if (j>=i && j<=(2*n-2-i))
          {
            if (j<=n-1)
            {
               count++;
               printf("%d",count);
            }
            else
            {
               count--;
               printf("%d",count);
            }
            
          }
          else
         printf(" ");
          
           
            
        }
        printf("\n");
    }
    
     return 0;
 }