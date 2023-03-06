//9. Write a program to print cubes of the first 10 natural numbers
#include<stdio.h>
int main(){
 int cube;
    printf("Cube of first 10 natural no.:\n");
    for (int i = 1; i<=10; i++)
    {
            cube=i*i*i;
            printf("%dx%dx%d = %d\n",i,i,i,cube);
    }

    return 0;
}