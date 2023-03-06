//3. Write a function to compare two strings.
#include<stdio.h>
void Compare(char *a,char *b)
{
    int i;
    for ( i = 0; a[i]!='\0' || b[i]!='\0'; i++)
    {
        if (a[i]<b[i])
       {
        printf("String 2 is greater than String 1"  );
        break;
       }
        else if (a[i]>b[i])
        {
            printf("String 1 is greater than String 2");
            break;
        }
    }
    if (a[i]=='\0' && b[i]=='\0')
    printf("Both String are Same");
    
    
}
int main(){
    char a[]="Vaishnavi";
    char b[]="Danielle";
    printf("String 1  : %s\n",a);
    printf("String 2  : %s\n",b);
    Compare(a,b);
    return 0;
}