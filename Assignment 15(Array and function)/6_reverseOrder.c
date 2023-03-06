//6. Write a function in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
void reverse(int a[],int size)
{
    printf("Reverse Array Element : ");
    for (int i = (size-1); i >=0; i--)
    {
        printf("%d ",a[i]);
    }
    
}
void read(int a[],int size)
{
    
    printf("Enter 10 integer : \n");
    for (int i = 0; i < 10; i++)
    scanf("%d",&a[i]);
    //reverse(a,10);
}
int main(){
    int a[10];
    read(a,10);
    reverse(a,10);
    return 0;
}
