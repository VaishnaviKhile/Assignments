//10. C program to find all roots of a quadratic equation using switch cases
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    float determinant,root1 ,root2,denominator;
    printf("To find root of quadratic equation\nEnter 3 coeffient:");
    scanf("%f %f %f",&a,&b,&c);
    determinant= b*b - 4*a*c;
    denominator=2*a;
    printf("determinant= %f\n",determinant);
  

    switch (determinant>=0)
    {
    case 1:
        root1= ((-b+sqrt(determinant))/denominator);
        root2= ((-b-sqrt(determinant))/denominator);
        switch (determinant==0)
        {
        case 1:
            printf("Roots are real and equal.\nRoot is %f",root1);
            break;
        case 0:
            printf("Roots are real and distinct\nRoots are %f & %f",root1,root2);
            break;
        }   
        break;
    case 0: 
        
        printf("Roots are imaginary");
    }

    return 0;
}