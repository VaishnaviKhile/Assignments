//1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.
#include<stdio.h>
int main(){
    char a[5][20];
    int count=0;
    printf("Enter 5 String : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s",a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; a[i][j]!='\0'; j++)
        {
            if(a[i][j]=='a' || a[i][j]=='e' || a[i][j]=='i' || a[i][j]=='o' || a[i][j]=='u')
                count++;
        }
        
    }
    printf("No. of Vowel in above 5 string : %d",count);
    
    return 0;
}