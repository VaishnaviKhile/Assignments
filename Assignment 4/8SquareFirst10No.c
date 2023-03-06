//8. Write a program to print squares of the first 10 natural numbers
#include<stdio.h>
int main(){
    int square;
    printf("Square of first 10 natural no.:\n");
    for (int i = 1; i<=10; i++)
    {
            square=i*i;
            printf("%dx%d = %d\n",i,i,square);
    }

    return 0;
}