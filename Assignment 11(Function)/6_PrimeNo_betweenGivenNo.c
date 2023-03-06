//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void Prime_No_between(int x,int y){
    int flag;
    if (x<y)
    {
        for(int i=x; i<=y; i++)
        {   if (i==1)
            i++;
            flag=0;
            for (int j = 2; j <= (i/2); j++)
            {
                if (i%j==0)
                    flag=1;
                
            } 
            if (flag==0)
            printf("%d ",i);
        }    
    }
    else
    {
         for(int i=y; i<=x; i++)
        {    flag=0;
            for (int j = 2; i <= (i/2); j++)
            {
                if (i%j==0)
                    flag=1;    
            } 
            if (flag==0)
            printf("%d ",i);
        }    
    }
    
}
int main(){
    int x,y;
    printf("To print All prime no Between 2 no.\nEnter two no.");
    scanf("%d %d",&x,&y);
    printf("Prime no. between %d & %d are: ",x,y);
    Prime_No_between(x,y);
    return 0;
}