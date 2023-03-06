//9. Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main(){
    int n, temp, count=0,r, sum=0,result;
    printf("Enter number to check whether it's armstrong number or not:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
       n= n/10;
        ++count;
    }
    // printf("%d",count);this will give count
    n=temp;
    while (n!=0)
    {
        r=0;
        result=1;
        r=n%10;
        n=n/10;
        for (int i = 1; i<=count; i++)
        {
            result=result*r;
        }
        
        sum=sum+result;
    }
    printf("Armstrong no. of %d is %d\n",temp,sum);
    if(sum==temp)
    printf("%d is Armstrong no.\n",temp);
    return 0;
}