//7. Write a program to print the first 10 even natural numbers in reverse order
#include<stdio.h>
int main(){
    printf("First 10 even natural no. in reverse order:\n");
    for (int i = 20; i>=1; i--)
    {
            if (i%2==0)
                printf("%d\n",i);
    }

    return 0;
}