//10.Find repeated character  in given string.
#include<stdio.h>
void RepeatedChar(char *s)
{
    char h[150]={0};
    for (int i = 0; s[i]!='\0'; i++)
    {
        h[s[i]]++;
    }
    for (int i = 65; i < 130; i++)
    {
        if(h[i]>1)
        {
            printf("%c--->%d\n",i,h[i]);
        }
    }
    
}
int main(){
    char a[]="Hi it's me V and nice to meet you";
    RepeatedChar(a);
    return 0;
} 