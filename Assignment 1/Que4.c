//4. WAP to find the area of the circle. Take radius of circle from user as input and print the result inbelow given format.
//Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.
#include<stdio.h>
int main(){
    float r,a;
    printf("Enter a radius:");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("Area of circle is a %f having radius %f",a,r);

    return 0;
}