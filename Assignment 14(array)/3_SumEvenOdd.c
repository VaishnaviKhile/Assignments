//3. Write a program to calculate the sum of all even numbers and sum of all odd numbers which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main(){
    int a[10],even=0,odd=0;
    float avg;
    printf("Enter 10 No.: ");
    for (int i = 0; i < 10; i++)
     {  scanf("%d",&a[i]);
     }
    
    for (int i = 0; i < 10; i++)
    {
        if (a[i]%2==0)
        even=even+a[i];
        else
        odd=odd+a[i];
        
    }
    printf("Sum of Even Numbers: %d\n",even);
    printf("Sum of Odd no: %d",odd);
    return 0;
}