//1. Write a program to calculate the length of the string. (without using builtin method)
#include<stdio.h>
int main(){
    char a[]="vaishnavi";
    int length=0;
    for (int i = 0; a[i]!=0; i++)
    {
        length++;
    }
    printf("Length of %s is %d",a,length  );
    
    return 0;
}