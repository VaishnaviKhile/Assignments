//10. Write a program to print a string in reverse using a pointer
#include<stdio.h>
void Reverse(char *s)
{ 
    int length=0;
    for (int i = 0; s[i]!='\0'; i++)
    length++;
    printf("\nString in Reverse Order : ");
    for (int i = length-1; i >= 0; i--)
    printf("%c",s[i]);
    
    
}
int main(){
    char a[20]="Vaishnavi";
    printf("Given String : %s ",a);
    Reverse(a);
    return 0;
}