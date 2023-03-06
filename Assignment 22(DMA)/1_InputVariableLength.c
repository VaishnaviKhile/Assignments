//1. Define a function to input variable length string and store it in an array without memory wastage.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
char* InputString()
{
    char *p,*q,ch;
    int len=1,i;
    printf("Enter your Name : ");
    p=(char*)malloc(len);
    ch=getche();// this value will store in *p
    *p=ch;
    do
    {
        q=(char*)malloc(len+1); //*q for storing null value at end
        for ( i = 0; i < len; i++)
        *(q+i)=*(p+i);
        *(q+i)='\0';
        len++;
        free(p);
        p=(char*)malloc(len);
        for ( i = 0; i < len; i++)
        *(p+i)=*(q+i);// q array  store in p with null
        free(q);
        ch=getche();
        *(p+len-1)=ch; //substituting character in place of 
    }while(ch!=13);
    //last character store in p array is 13(enter key)
    //storing p array in q array last value change to null in place of 13(enter key)
    q=(char*)malloc(len);// same length as p 
    for ( i = 0; i < len; i++)
    *(q+i)=*(p+i); 
    *(q+i-1)='\0';
    free(p);
   // printf("\nString:%s",q);
    return q;
}
int main(){
    char *str;
    str=InputString();
   printf("Entered String : %s",*str);
    return 0;
}