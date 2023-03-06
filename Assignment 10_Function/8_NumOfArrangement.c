//8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int factorial(int num){
    int fact=1;
    for (int i = 1; i <= num; i++)
    fact=fact*i;
    return fact;
}
int No_of_Arrangement(int n, int r){
    return factorial(n)/factorial(n-r);
}
int main(){
    int n,r;
    printf("Enter no. of item to calculate arrangement :");
    scanf("%d",&n);
    printf("Enter selected item 'r':");
    scanf("%d",&r);
    printf("Number Of Arrangement:%d",No_of_Arrangement(n,r));
    return 0;
}