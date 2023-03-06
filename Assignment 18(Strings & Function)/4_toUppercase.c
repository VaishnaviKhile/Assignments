//4. Write a function to transform string into uppercase
#include<stdio.h>
void UpperCase(char *a)
{
    for (int i = 0; a[i]!=0; i++)
    {
        if (a[i]>=97 && a[i]<=122)
        a[i]=a[i]-32;
    }

}
int main(){
    char a[]="VaisHnaVi";
    printf("Given String : %s\n",a);
    UpperCase(a);
    printf("UpperCase : %s ",a);
    return 0;
}