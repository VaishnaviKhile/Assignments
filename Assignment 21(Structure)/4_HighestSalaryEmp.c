//4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]
#include<stdio.h>
#include<stdlib.h>
struct Employee
{
    int id;
    char name[30];
    int salary;
};
int maxSalary(struct Employee e[],int n)
{
    int Max;

    Max=e[0].salary;

    for (int i = 1; i < n; i++)
    {
        if (Max < e[i].salary)
        {
            Max=((e+i))->salary;
        }
    }
    return Max;
}
int main()
{
    int n;
    struct Employee *e;

    printf("Enter number of Employee : ");
    scanf("%d",&n);
    e=(struct Employee*)calloc(n,sizeof(struct Employee));
    printf("Enter Employee's Salary : ");

    for (int i = 0; i < n; i++)
    scanf("%d",&e[i].salary);

    printf("Maximum Salary among Entered Salary : %d",maxSalary(e,n));
    
    return 0;
}