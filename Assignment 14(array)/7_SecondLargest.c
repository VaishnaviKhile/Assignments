//7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main(){
    int a[10] ;
    int max1=-10000,max2=-20000;
    printf("Enter 10 No.: ");
    for (int i = 0; i < 10; i++)
     {  
        scanf("%d",&a[i]);
     }
    
   /* for (int i = 0; i < 2; i++)
    {
       for (int j = i+1; j < 10; j++)
       {
            if (a[j]>a[i])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            } 
       } 
    }
    */
   for (int i = 0; i < 10; i++)
   {
        if (max1<a[i])
        {
            max2=max1;
            max1=a[i];
        }
        else if (max2<a[i])
        {
            max2=a[i];
        }
        
        
   }
   
    printf("Second Largest No. : %d",max2);
    return 0;
}