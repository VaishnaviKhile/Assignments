//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void N_odd_natural(int p){
    for (int i = 1; i <= p; i=i+2)
    {
            printf("%d\n",i);  
    }
    
}
int main(){
    int n;
    printf("Enter any no. to print odd no.:");
    scanf("%d",&n);
    printf("First %d odd natural no.:\n",n);
    N_odd_natural(n);
    return 0;
}