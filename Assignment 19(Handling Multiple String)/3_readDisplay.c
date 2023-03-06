//3. Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
int main(){
    char a[5][20];
    int count=0;
    printf("Enter 5 String : ");
    for (int i = 0; i < 5; i++)
    {
        fgets(a[i],20, stdin);
    }
    printf("Entered string : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}