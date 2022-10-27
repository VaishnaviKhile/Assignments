//11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>
int main(){
    float a, INR=76.23;
    printf("Enter the ammount in INR u wanna convert into USD:");
    scanf("%f",&a);
    a/=INR;
    printf("Given ammount converted into USD is %f",a);

    
    return 0;
}