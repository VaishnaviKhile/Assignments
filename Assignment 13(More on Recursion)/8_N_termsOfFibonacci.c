//8. Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
  int Fibonacci(int n){
    if(n==1 || n==2)
    return 1;
    return Fibonacci(n-1)+Fibonacci(n-2);

}
int main(){
    int n;
    printf("Enter no. of terms to print fibonacci series:");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    for(int i=1;i<=n;i++)
    {
      printf("%d ",Fibonacci(i));
    }
  
    return 0;
}