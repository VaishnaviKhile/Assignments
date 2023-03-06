//5. Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int max(int* x,int *y)
{
    if (*x>*y)
    return *x;
    else
    return *y;
    
}
int main(){
    int a,b;
    printf("Enter two Number to find Max Number :\n");
    scanf("%d %d",&a,&b);
    printf("Maximum Number : %d",max(&a,&b));
    return 0;
}