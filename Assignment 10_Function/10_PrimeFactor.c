//10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>
void Factor(int num){

        // for (int i = 2; i <= num; i++)
        // {
        //     while(num%i==0)
        //     {
        //         printf("%d ",i);
        //         num=num/i;
        //     }
        // }
        int i=2;
        while (num!=0)
        {
            if(num%i==0){
            printf("%d ",i);
            num=num/i;
            }
            else
            i++;
        }
        
        

    
}
int main(){
    int n;
    printf("Enter no. to find its prime factor:");
    scanf("%d",&n);
    printf("Prime factor of %d: ",n);
    Factor(n);
    return 0;
}