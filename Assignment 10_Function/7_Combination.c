//7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
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
int main(){
    int n, r;
    printf("Enter n item to calculate combination:");
    scanf("%d",&n);
    printf("Enter selected item r:");
    scanf("%d",&r);
    printf("Combination = %d",combination(n,r));
    return 0;
}