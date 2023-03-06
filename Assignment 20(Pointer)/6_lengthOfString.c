//6. Write a program to calculate the length of the string using a pointer
#include<stdio.h>
int LengthOfString(char *s)
{
    int length=0;
    for (int i = 0; s[i]!='\0'; i++)
      length++;
    
    return length;
}
int main(){
    char a[]="Vaishnavi";
    printf("String : %s",a);
    printf("\nLength Of String : %d",LengthOfString(a));
    
    return 0;
}