//9. Write a C program to sort a string array in ascending order.
#include<stdio.h>
int main(){
    char a[]="vaishnavi" ,b[10],t;
    int length=0;
    printf("Given string :  %s\n",a);
    for (int i = 0; a[i]!=0; i++)
    {
        length++;
    }
    
    printf("Length of String : %d\n",length);
    for (int i=0 ; i<length-1; i++)
    {
       for (int j = i+1; j <length ; j++)
       {
            if (a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            } 
       }  
    }
    printf("Sorted String  : %s",a);
    return 0;
}
 