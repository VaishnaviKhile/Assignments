//6. Write a program to reverse a string.
#include<stdio.h>
int main(){
    char a[]="Vaishnavi";
    int length=0;
    printf("Given string :  %s\n",a);
    for (int i=0 ; a[i]!=0; i++)
    {
        length++;
    }
    printf("\nReverse String :  ");
    for (int i = length; i >=0; i--)
    {
        printf("%c",a[i]);
    }
    
    
    return 0;
}