//4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main(){
    char a[][20]={"hi","welcome","next","Death","note"};
    char s[20];
    printf("Elements in List : ");
    for (int i = 0; i < 5; i++)
    {
      printf("'%s' ",a[i]);
    }
    printf("\nEnter string to search string : ");
    scanf("%s",s);
    for (int i = 0; i < 5; i++)
    {
        if(strcmp(a[i],s)==0)
        printf("String found");
        
    }
    return 0;
}