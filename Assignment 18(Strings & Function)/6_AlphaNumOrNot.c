//6. Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>
void AlphaNum(char *a)
{
    int alpha=0, digit=0;
    for (int i=0 ; a[i]!=0; i++)
    {
        if ((a[i]>='A'&& a[i]<='Z')||(a[i]>='a'&& a[i]<='z'))
        alpha++;
        else if (a[i]>='0'&& a[i]<='9')
        digit++;   
    }
    if (alpha==0 && digit==0)
    printf("%s is not alphanumeric string",a);
    else
    printf("%s is aplhanumeric string",a);
    

}
int main(){
    char a[]="Vaishnavi1";
    printf("Given String : %s\n",a);
    AlphaNum(a);
    return 0;
}