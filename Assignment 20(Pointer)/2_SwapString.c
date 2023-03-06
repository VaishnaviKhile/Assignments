//2. Write a function to swap strings of two char arrays of calling functions.
#include<stdio.h>
#include<string.h>
void swap(char** a,char**b)
{
    char *temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
int main(){
    char *a="vaishnavi";
    char*b="Danielle";
    printf("Before swapping :\na = %s\nb = %s",a,b);
    swap(&a,&b);
    printf("\nAfter swapping  : \na = %s\nb = %s",a,b);
    

    return 0;
}
