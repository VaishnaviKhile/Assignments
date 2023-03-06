//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void N_prime_No(int num){
    int flag,n=2;
    while (n<=num)
    {
         flag=0;
        for (int i = 2; i <= (n/2); i++)
        {
            if (n%i==0)
                flag=1;
            
        }
        if (flag==0)
        printf("%d ",n);
        n++;
    }
    
}
int main(){
    int num;
    printf("To print first N prime no.\nEnter no.:");
    scanf("%d",&num);
    printf("All prime no. under %d: ",num);
    N_prime_No(num);
    return 0;
}