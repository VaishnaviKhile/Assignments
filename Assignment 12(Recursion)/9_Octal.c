//9. Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void Octal(int n){
   
   if (n==0)
   return;
   Octal(n/8);
   printf("%d",n%8);
     
}
int main(){
    int n;
    printf("Enter no. to print octal of that no.:");
    scanf("%d",&n);
    printf("Octal No. of %d is ",n);
    Octal(n);
    return 0;
    }