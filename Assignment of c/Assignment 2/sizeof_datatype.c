//Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main(){
    printf("Size of int:%4d bytes\n",sizeof(int));
    printf("Size of char:%3d bytes\n",sizeof(char));
    printf("Size of float:%2d bytes\n",sizeof(float));
    printf("Size of double:%1d bytes\n",sizeof(double));

    return 0;
}