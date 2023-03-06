//2. Write a program to ask the user to input a number of data values he would like to enter then create an array dynamically to accommodate the data values. Now take the input from the user and display the average of data values.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int* p;
    float avg,sum=0;
    printf("How many numbers u wanna enter : ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("Enter No.: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
    }
    for (int i = 0; i < n; i++)
    {
        sum+=*(p+i);
    }
    printf("\nSum of entered Elements :%.0f\n",sum);
    avg=sum/n;
    printf("\nAvg of entered elements : %.3f\n",avg);
    return 0;
}
