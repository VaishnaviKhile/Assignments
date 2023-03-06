//4. Write a program to convert a given string into uppercase
#include<stdio.h>
int main(){
     char a[]="VaisHnaVi";
     printf("Given String : %s\n",a);
    for (int i = 0; a[i]!=0; i++)
    {
        if (a[i]>=97 && a[i]<=122)
        a[i]=a[i]-32;
    }
    printf("UpperCase : %s ",a);
    return 0;
}