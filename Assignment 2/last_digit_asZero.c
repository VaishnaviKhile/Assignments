//Write a program to make the last digit of a number stored in a variable as zero.(Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main(){
    int a;
    printf("Enter any no.: ");
    scanf("%d",&a);
    printf("Entered no.is:%d\n ",a);
    a=((a/10)*10);
    printf("Number after its last digit stored as zero is %d",a);
    return 0;
}