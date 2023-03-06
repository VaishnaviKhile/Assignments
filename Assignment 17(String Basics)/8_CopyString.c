//8. Write a program in C to copy one string to another string.
#include<stdio.h>
int main(){
    char a[]="Vaishnavi" ,b[10];
    int length=0;
    printf("Given string :  %s\n",a);
    for (int i=0 ; a[i]!=0; i++)
    {
        b[i]=a[i];
        length++;
    }
    b[length]='\0';
    printf("\nCopied String : %s",b);
    return 0;
}