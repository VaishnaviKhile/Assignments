//9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three no.:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
          printf(" %d is greater no.");
        else
            printf("%d is greater ",c);
    }
    else if ((a==b)||(b==c)||(a==c))
        printf("Greater no. is repeated");
    else
    {
        if(b>c)
        printf("%d is greater",b);
        else
        printf("%d is greater",c);
    }
    
    return 0;
}