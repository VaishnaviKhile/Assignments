/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit
*/
#include<stdio.h>
int main(){
    float a,b,c;
    char option;
    printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not \nb. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\nc. Check whether a given set of three numbers are equilateral triangle or not\nd. Exit\n");

    printf("Enter above option: ");
    fflush(stdin);
    scanf("%c",&option);
    fflush(stdin);
    printf("Enter 3 side of triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    switch (option)
    {
    case 'a':
        if (a==b || b==c || a==c)
        printf("Triangle with given sides is isoscales triangle");
        break;
    case 'b':
        if (((b*b)==a*a+c*c) || (c*c==b*b+a*a) || (a*a==b*b+c*c))
        printf("Triangle with given sides is right angle triangle");
        break;
    case 'c':
        if (a==b==c)
        printf("Triangle with given sides is equilateral triangle");
        break;
    case 'd':
        return 0;
        break; 
        
    default:
        break;
    }
    
    return 0;
}