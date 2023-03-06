//3. Write a program to count vowels in a given string
#include<stdio.h>
int main(){
     char a[]="vaishnavi";
    int count=0;
    for (int i = 0; a[i]!=0; i++)
    {
        if (a[i]=='a'|| a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        count++;
    }
    printf("Number of Vowels in %s is %d",a,count);
    return 0;
}