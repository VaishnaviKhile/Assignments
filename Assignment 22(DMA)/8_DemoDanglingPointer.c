//8. Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
int* DanglingPointer()
{
    int p=5;
    printf("%d\n",p);
    return &p;
}
int main(){
    int *s;
    s=DanglingPointer();
    printf("%d",*s);
    return 0;
}