//2. Write a function to reverse a string.
#include<stdio.h>
void Reverse(char* p )
{
    int length=0;
    for (int i=0 ; p[i]!=0; i++)
    {
        length++;
    }
    printf("\nReverse String :  ");
    for (int i = length; i >=0; i--)
    {
        printf("%c",p[i]);
    }
}
int main(){
    char a[]="vaishnavi";
    printf("Given String : %s",a);
    Reverse(a);
    return 0;
}