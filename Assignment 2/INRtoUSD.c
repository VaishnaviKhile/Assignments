//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main(){
    float INR ,USD;
    printf("Enter money in Indian currency:");
    scanf("%f",&INR);
    printf("Money:%.4f INR\n",INR);
    USD=INR/76.23;
    printf("USD currency: %f",USD);
    return 0;
}