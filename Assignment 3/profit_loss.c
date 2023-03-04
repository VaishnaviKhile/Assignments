//10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main(){
    float SellPrice,CostPrice,Profit,Loss;
    printf("Enter selling price: ");
    scanf("%f",&SellPrice);
    printf("Enter cost price:");
    scanf("%f",&CostPrice);
    Profit=SellPrice-CostPrice;
    Loss=CostPrice-SellPrice;

    if (SellPrice > CostPrice)
     printf("profit %% %f",((Profit*100)/CostPrice));
    
    else
        printf("Loss %% %f", (Loss*100)/CostPrice);    
    return 0;
}