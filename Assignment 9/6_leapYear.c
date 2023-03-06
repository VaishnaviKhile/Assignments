//6. Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
int main(){
    int year;
    printf("Enter year to check whether year is leap year or not:");
    scanf("%d",&year);
    if (year>=100)
    {
        switch ((year%100)==0)
        {
        case 0:
            switch (year%4==0)
            {
            case 1:
                printf("%d is a leap year",year);
                break;
            case 0:
                printf("%d is not leap year",year);
                break;
            }
            break;
        case 1:
           switch (year%400==0)
           {
           case 1:
            printf("%d is a leap year",year);
            break;
           case 0:
           printf("%d is not leap year",year);
           break;
           }
           break;
        }
    }
    else
    printf("Enter valid year");
    
    return 0;
}