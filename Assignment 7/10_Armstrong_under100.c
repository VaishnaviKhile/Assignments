//10. Write a program to print all Armstrong numbers under 1000

#include<stdio.h>
int main(){
    int  n, count,r, sum,result;
    printf("Armstrong number between 1 to 1000:\n");
   for (int i = 1; i <=1000; i++)
    {  if (i<=9)
        printf("%d ",i);
     else
     {  count=0;
        sum=0;
        n=i;
        while(i!=0){
        i=i/10;
        ++count; //  this will no. of digit 
        }
       i=n;
       while (i!=0)
       {
        r=0;
        result=1;
        r=i%10;
        i=i/10;
        for (int j = 1; j <= count; j++)
        result=result*r;
        sum=sum+result;  
    }
       i=n;
       if (sum==n)
        printf("%d ",n); 

    }   
    }

    return 0;
}