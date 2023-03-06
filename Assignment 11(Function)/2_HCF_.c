//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int HCF(int x,int y){
    if (x<y)
    {
        for (int i = x; i >=1; i--)
        {
            if (x%i==0 && y%i==0)
            return i;  
        }
        
    }
    else
    {
        for (int i = y; i >=1; i--)
        {
            if (x%i==0 && y%i==0)
            return i;  
        }
    }
    
}
int main(){
    int x,y;
    printf("Enter two no. to calculate HCF:");
    scanf("%d %d",&x,&y);
    printf("HCF of %d & %d: %d",x,y,HCF(x,y));
    return 0;
}