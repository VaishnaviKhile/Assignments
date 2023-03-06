//9. Write a program to calculate LCM of two numbers
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two no. to calculate LCM :");
    scanf("%d %d",&x,&y);
    for (int i = 2; i <= (x*y); i++)
    {
            if ((i%x==0) && (i%y==0))
            {
                printf("LCM of %d & %d is %d",x,y,i);
                break;
            }
            
    }
    
    return 0;
}