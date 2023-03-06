//7. Write a program to count digits in a given number
#include<stdio.h>
int main(){
    int n,count=0,temp;
    printf("Enter no. to count digit in no. :");
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    
    printf("Total digit in %d is %d\n",temp,count);

    return 0;
}