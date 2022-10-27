//8. Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main(){
    int a;
    float b;
    char c;
    double d;
    printf("Enter integer real character real value respectively to check type  ");
    scanf("%d %f %c %f",&a,&b,&c,&d);
    printf("size %d is %d & %f is %d & %c is %d & %lf is %d",a,sizeof(a),b,sizeof(b),c,sizeof(c),d,sizeof(d));

    return 0;
}