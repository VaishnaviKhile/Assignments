//4. Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr=(int*)malloc(4);
    if(*ptr==NULL)
    {
        printf("Memory allocation failed...");
        return;
    }
    else
    printf("Memory is allocated");
    

    return 0;
}