//1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int x,int y){
    if (x>y)
    {
        for (int i = x; i <= x*y; i++)
        {
            if (i%x==0 && i%y==0)
            return i;  
        }
        
    }
    else
    {
        for (int i = y; i <= x*y; i++)
        {
            if (i%x==0 && i%y==0)
            return i;  
        }
    }
    

}
int main(){
    int x,y;
    printf("Enter two no.:");
    scanf("%d %d",&x,&y);
    printf("LCM of %d & %d:%d",x,y,LCM(x,y));
    return 0;
}