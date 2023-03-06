//9. Write a function to reverse a string word wise. (For example if the given string is "iNeuron Education Services” then the resulting string should be “Services Education iNeuron” )
#include<stdio.h>
void reverse(char *begin ,char *end)
{
    char temp;
    while (begin<end)
    {
        temp=*begin;
        *begin++=*end;
        *end--=temp;
    }
    
}
void reverseWord(char* s)
{
    char *word_begin=s;
    char *temp=s;
    while (*temp)
    {
        temp++;
        if(*temp=='\0')
        reverse(word_begin,temp-1);
        else if(*temp==' ')
        {
            reverse(word_begin,temp-1);
            word_begin=temp+1;
        }
    }
    reverse(s,temp-1);

}
int main(){
    char s[]="iNeuron Education Services";
    reverseWord(s);
    printf("%s",s);
    return 0;
}