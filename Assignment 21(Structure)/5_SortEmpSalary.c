//5. Write a function to sort employees according to their salaries [ refer structure from question 1]
#include<stdio.h>
#include<stdlib.h>
struct Employee
{
    int id;
    char name[30];
    int salary;
};
void SortSalary(struct Employee e[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (e[i].salary > e[j].salary)
            {
                struct Employee temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            } 
        }  
    }

}
int main(){
    int n;
    struct Employee *e;
    printf("Enter number of Employee : ");
    scanf("%d",&n);
    e=(struct Employee*)calloc(n,sizeof(struct Employee)) ;

    for (int i = 0; i < n; i++)
    {
    
        printf("%d.   Enter Employee id : ",i+1);
        scanf("%d",&e[i].id);
        printf("     Enter Employee name : ");
        fflush(stdin);
        fgets(e[i].name,30,stdin);
        printf("     Enter Employee Salary : ");
        scanf("%d",&e[i].salary);
    }
    SortSalary(e,n);
    printf("Sorted Employee's  : \n");
    
    for (int i = 0; i < n; i++)
    {
      printf("Employee ID : %d\n",e[i].id);
      printf("Employee Name : %s",e[i].name);
      printf("Employee salary : %d\n\n",e[i].salary);
    }
    
    
    return 0;
}