//4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void first_N_Natural(int p)
{
    for (int i = 1; i <= p; i++)
        printf("%d\n",i); 
}
int main(){
    int n;
    printf("Enter any no. to print n natural number:");
    scanf("%d",&n);
    printf("Natural no.:\n");
    first_N_Natural(n);
    return 0;
}