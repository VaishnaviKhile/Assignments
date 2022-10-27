//12. Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter any 3 digit no.: ");
    scanf("%d",&a);
    b=a%10;
    b*=100;
    c=a/10;
    c+=b;
    printf("%d after rotating its digit by one position towards the right is %d.", a,c);
    return 0;
}