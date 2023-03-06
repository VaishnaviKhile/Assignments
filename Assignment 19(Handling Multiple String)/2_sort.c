//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main(){
    char a[10][20];
    int count=0;
    printf("Enter 10 City name : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%s",a[i]);
    }
    printf("Sorting City Names : \n");
    for (int i = 0; i < 9; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
           if (strcmp(a[i],a[j])>0)
           {
            char temp[20];
            strcpy(temp,a[i]);
            strcpy(a[i],a[j]);
            strcpy(a[j],temp);
           }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n",a[i]);
    }
    
    return 0;
}