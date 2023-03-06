//1. Write a function to calculate length of the string
#include<stdio.h>
int lengthOfString(char *p)
{
    int count=0;
    for (int i = 0; *(p+i) !='\0'; i++)
    {
        count++;
    }
    return count;
}
int main(){
    char a[]="vaishnavi";
    printf("Given string :  %s\n",a);
    printf("Length Of String : %d",lengthOfString(a));
    return 0;
}