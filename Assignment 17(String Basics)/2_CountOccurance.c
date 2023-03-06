//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main(){
    char a[]="vaishnavi";
    int count=0;
    for (int i = 0; a[i]!=0; i++)
    {
        if (a[i]=='a')
        count++;
    }
    printf("Occurance of character 'a' in %s is %d",a,count);
    return 0;
}