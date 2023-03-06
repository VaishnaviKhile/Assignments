//10. Write a program in C to copy the elements of one array into another array.Take array values from the user
#include<stdio.h>
int main(){
    int a[100],b[100],n ;
    printf("How many no. u wanna enter: ");
    scanf("%d",&n);
    printf("Enter no.:");
    for (int i = 0; i < n; i++)
     {  
        scanf("%d",&a[i]);
     }
     printf("Copied Element: ");

     for (int i = 0; i < n; i++)
     {
        b[i]=a[i];
        printf("%d ",b[i]);

     }
     
    
    return 0;
}