//8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int factorial(int num){
    int fact=1;
    for (int i = 1; i <= num; i++)
    fact=fact*i;
    return fact;
}
int combination(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
void pascal(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
          { 
          printf("%d ",combination(i,j));
          }
        printf("\n");
    } 
}


int main(){
    int n;
    printf("Enter no. to print pascal triangle:");
    scanf("%d",&n);
    pascal(n);
    return 0;
}