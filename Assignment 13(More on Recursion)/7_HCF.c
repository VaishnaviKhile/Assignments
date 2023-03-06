//7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int HCF(int n1,int n2)
{
    if(n2%n1==0)
    return n1;
    else
    HCF(n2%n1,n1);
}
int main(){
    int a,b,h;
    printf("Enter two no. to calculate HCF:");
    scanf("%d %d",&a,&b);
    printf("HCF of %d & %d is ",a,b);
    if (a<b)
    h=(HCF(a,b));
    else
    h=(HCF(b,a));
    printf("%d",h);
    return 0;
}