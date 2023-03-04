//17. Write a program which takes the length of the sides of a triangle as an input. Displaywhether the triangle is valid or not.
#include<stdio.h>
// triangle is valid or not 
// a+b>c
// a+c>b
// b+c>a

int main(){
    int a,b,c;
    printf("Enter the 3 sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    if(((a+b)>c) || ((a+c)>b) || ((b+c)>a))
        printf("Triangle is valid with side %d, %d,%d",a,b,c);
    else
        printf("Triangle is not valid");
        
    return 0;
}