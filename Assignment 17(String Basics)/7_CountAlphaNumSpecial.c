//7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
int main(){
    char a[]="Vaishnavi@2001";
    int alpha=0, digit=0, special=0;
    printf("Given string :  %s\n",a);
    for (int i=0 ; a[i]!=0; i++)
    {
        if ((a[i]>='A'&& a[i]<='Z')||(a[i]>='a'&& a[i]<='z'))
        alpha++;
        else if (a[i]>='0'&& a[i]<='9')
        digit++;
        else
        special++;
        
    }
    printf("\nTotal alphabet :  %d\nTotal Digit    :  %d\nTotal special  :  %d",alpha,digit,special);
   
    
    return 0;
}