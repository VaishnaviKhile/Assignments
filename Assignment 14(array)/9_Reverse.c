//9. Write a program in C to read n number of values in an array and display it in reverse order.Take array values from the user.
#include<stdio.h>
int main(){
    int n;
    printf("How many no. u wanna enter: ");
    scanf("%d",&n);
    int *p=(int*)calloc(n,sizeof(int));
    printf("Enter no.:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
    }
    printf("Reverse Order: ");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ",*(p+i));
    }
    
    free(p);
    return 0;
}