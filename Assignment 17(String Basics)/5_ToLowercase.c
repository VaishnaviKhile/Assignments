//5. Write a program to convert a given string into lowercase
#include<stdio.h>
int main(){
    char a[]="VaisHnaVi";
    printf("Given string : %s\n",a);
    for (int i = 0; a[i]!=0; i++)
    {
        if (a[i]>=65 && a[i]<=90)
        a[i]=a[i]+32;
    }
    printf("LowerCase : %s ",a);
    return 0;
}