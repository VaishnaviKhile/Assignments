//18. Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main(){
    int n,year;
    printf("Enter year:");
    scanf("%d",&year);
    printf("Enter any month no.:");
    scanf("%d",&n);
    if(n<12 && year>100){
    if (n==2)
    {
        if (year%100==0)
       {
        if(year%400==0)
         {
            printf("In %d month have 29 days",n);

         }
       }
    else if (year%4==0)
      printf("In %d month have 29 days",n);
    
    else
        printf("In %d month have 28 days",n);
    }
    
    switch (n)
    {
    case 1:
        printf("In %d month having 31 days",n);
        break;
    case 3:
        printf("In %d month having 31 days",n);
        break;
    case 4:

        printf("In %d month having 30 days",n);
        break;
    case 5:
        printf("In %d month having 31 days",n);
        break;
    case 6:
        printf("In %d month having 30 days",n);
        break;
    case 7:
        printf("In %d month having 31 days",n);
        break;
    case 8:
        printf("In %d month having 31 days",n);
        break;
    case 9:
        printf("In %d month having 30 days",n);
        break;
    case 10:
        printf("In %d month having 31 days",n);
        break;
    case 11:
        printf("In %d month having 30 days",n);
        break;
    case 12:
        printf("In %d month having 31 days",n);
        break;
    
    }
    }
    else
     printf(" Invalid month or year");
    return 0;
}