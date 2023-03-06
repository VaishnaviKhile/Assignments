//6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
int main(){
    int a[10] ;
    printf("Enter 10 No.: ");
    for (int i = 0; i < 10; i++)
     {  
        scanf("%d",&a[i]);
     }
    
    for (int i = 0; i < 9; i++)
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
    printf("Sorted Array : ");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d",a[i]);
    }
    
    
    return 0;
}