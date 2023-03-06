//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float SimpleInterest(float p, float r, float t){
    return (p*r*t)/100;
}
int main(){
    float principle,rate,time;
    printf("Enter Principle,Rate,Time Respectively:");
    scanf("%f %f %f",&principle,&rate,&time);
    printf("Simple Interest: ",SimpleInterest(principle,rate,time));
    return 0;
}