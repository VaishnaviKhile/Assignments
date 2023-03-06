// 10. Write a recursive function to print reverse of a given number
#include<stdio.h>
void Reverse(int n){
   
   if (n==0)
   return;
   printf("%d",n%10);
   Reverse(n/10);
     
}
int main(){
    int n;
    printf("Enter no. to print reverse of that no.:");
    scanf("%d",&n);
    printf("Reverse of %d is ",n);
    Reverse(n);
    return 0;
    }