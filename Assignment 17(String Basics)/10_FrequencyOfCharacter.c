//10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
int main(){
    char a[]="vaishnavi" ,b[122]={0};
    printf("Given string :  %s\n",a);
    for (int i = 0; a[i]!=0; i++)
    {
            b[(int)a[i]]++;
    }
    for (int i = 0; i < 122; i++)
    {
        if(b[i]!=0)
        printf("%c--->%d\n",i,b[i]);
    }
    
    return 0;
}