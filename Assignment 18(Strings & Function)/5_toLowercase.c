//5. Write a function to transform a string into lowercase
#include<stdio.h>
void LowerCase(char *a)
{
    for (int i = 0; a[i]!=0; i++)
    {
        if (a[i]>=65 && a[i]<=90)
        a[i]=a[i]+32;
    }

}
int main(){
    char a[]="VaIsHNaVI";
    printf("Given String : %s\n",a);
    LowerCase(a);
    printf("LowerCase : %s ",a);
    return 0;
}