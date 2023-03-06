//3. Write a program which takes the day number of a week and displays a unique sgreeting message for the day.
#include<stdio.h>
int main(){
    int n;
    printf("Enter week number:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Its Monday, Have a nice days");
        break;
    case 2:
        printf("Its Tuesday, Have a nice days");
        break;
    case 3:
        printf("Its Wednesday, Have a nice days");
        break;
    case 4:
        printf("Its Thursday, Have a nice days");
        break;
    case 5:
        printf("Its Friday, Have a nice days");
        break;
    case 6:
        printf("Its Saturday, Have a nice days");
        break;
    case 7:
        printf("Its Sunday, Have a nice days");
        break;
    
    default:
        printf("Enter valid week number");
        break;
    }
    return 0;
}