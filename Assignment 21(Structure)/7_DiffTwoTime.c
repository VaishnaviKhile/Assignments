//7. Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct Time
{
    int hour,min,sec;
};

int main(){
    struct Time t1,t2,t3;
    printf("\nEnter Time in format of Hour:Min:Sec : ");
    scanf("%d:%d:%d",&t1.hour,&t1.min,&t1.sec);
    printf("\nEnter Time in format of Hour:Min:Sec : ");
    scanf("%d:%d:%d",&t2.hour,&t2.min,&t2.sec);
    printf("\n\n     Time 1 : %d:%d:%d\n-",t1.hour,t1.min,t1.sec);
    printf("\n     Time 2 : %d:%d:%d",t2.hour,t2.min,t2.sec);
    //t1-t2
    if (t1.sec<t2.sec)
    {
        t1.min--;
        t1.sec+=60;
    }
    t3.sec=t1.sec-t2.sec;
    if(t1.min<t2.min)
    {
        t1.hour--;
        t1.min+=60;
    }
    t3.min=t1.min-t2.min;
    t3.hour=t1.hour-t2.hour;
    printf("\n-----------------------\n              %d:%d:%d",t3.hour,t3.min,t3.sec);
    return 0;
}