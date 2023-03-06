//8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void Binary(int n){
   
   if (n==0)
   return;
   Binary(n/2);
   printf("%d",n%2);
     
}
int main(){
    int n;
    printf("Enter no. to print binary of that no.:");
    scanf("%d",&n);
    printf("Binary No. of %d is ",n);
    Binary(n);
    return 0;
    }