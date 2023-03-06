//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float AreaCircle(float);
int main(){
    float r;
    printf("To find Area of circle\nEnter radius:");
    scanf("%f",&r);
    
    printf("Area of circle: %f",AreaCircle(r));
    return 0;
}
float AreaCircle(float x){
    return (3.14*x*x);
}
