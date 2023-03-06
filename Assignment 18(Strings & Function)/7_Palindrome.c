//7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
void Palindrome(char *a)
{
    int length=0,i=0,j=0;
    for (int i = 0; a[i]!='\0'; i++)
    {
        length++;
    }
    for ( i = 0,j=length-1; i <=j; i++,j--)
    {
        if (a[i]!=a[j])
        break;  
    }
    if (i>=j)
    printf("%s is Palindrome",a);
    else
    printf("%s is not palindrome",a);
    
    
}
int main(){
    char a[]="hannah";
    printf("Given String : %s\n",a);
    Palindrome(a);
    return 0;
}