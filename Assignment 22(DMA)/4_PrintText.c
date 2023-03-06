//4. Write a program to input and print text using dynamic memory allocation.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char* InputText()
{
    char *p,*q,ch;
    int len=1,i;
    printf("Enter your name : ");
    p=(char*)malloc(len);
    ch=getche();
    *p=ch;
    do
    {
         q=(char*)malloc(len+1);
         for ( i = 0; i < len; i++)
         *(q+i)=*(p+i);
         *(q+i)='\0';
         free(p);
         len++;
         p=(char*)malloc(len);
         for ( i = 0; i < len; i++)
         *(p+i)=*(q+1);
         ch=getche();
         *(p+len-1)=ch;
         free(q);
    }while (ch!=13);
    q=(char*)malloc(len);
    for (int i = 0; i < len; i++)
    *(q+i)=*(p+i);
    *(q+i-1)='\0';
    free(p);
    return q;
}
int main(){
    char *str;
    str=InputText();
    printf("Entered String : %s",*str);

    return 0;
}