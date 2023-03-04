//7. Write a program to check whether roots of a given quadratic equation are real &distinct, real & equal or imaginary roots
#include<stdio.h>
int main(){
    double a,b,c,discriminant;
    printf("Quadratic equation is in the form ax^2+bx+c=0\nEnter values for a, b, c:");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    
    discriminant= ((b*b)-(4*a*c));
    if (discriminant>0)
        printf("Roots are real and distinct");
    else if (discriminant==0)
        printf("Roots are real and equal" );
    else
        printf("roots are imaginary");
    
    return 0;
}