//8. Write a program to find the second smallest number in an array.Take array values from the user.
#include<stdio.h>
int main(){
    int a[10] ;
    int min1=1000000 ,min2=99999;
    printf("Enter 10 No.: ");
    for (int i = 0; i < 10; i++)
     {  
        scanf("%d",&a[i]);
     }
    /*
    for (int i = 0; i < 2; i++)
    {
       for (int j = i+1; j < 10; j++)
       {
            if (a[j]<a[i])
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
        if (min1>a[i])
        {
            min2=min1;
            min1=a[i];
        }
        else if (min2>a[i])
        {
            min2=a[i];
        }
        
        
   }
    printf("Second Smallest No.: %d",min2);
    return 0;
}