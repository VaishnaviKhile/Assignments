//6. Write a function to sort employees according to their names [refer structure from question 1]
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Employee
{
    int id;
    char name[30];
    int salary;
};
void sortName(struct Employee e[],int n)
{
     for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
              if(strcmp(e[i].name,e[j].name)>0)
              {
                 struct Employee temp;
                 temp.id=e[i].id;
                 e[i].id=e[j].id;
                 e[j].id=temp.id;
                strcpy(temp.name,e[i].name);
                strcpy(e[i].name,e[j].name);
                strcpy(e[j].name,temp.name);
                temp.salary=e[i].salary;
                 e[i].salary=e[j].salary;
                 e[j].salary=temp.salary;
            } 
        }  
    }
}
int main(){
    int n;
    struct Employee *e;
    printf("******To Sort Array according to name******\nEnter number of Employee : ");
    scanf("%d",&n);
    e=(struct Employee*)calloc(n,sizeof(struct Employee)) ;
    printf("\nEnter Employee's Detail : \n");

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
    sortName(e,n);
    printf("\n\nSorted Employee's according name : \n");
    
    for (int i = 0; i < n; i++)
    {
      printf("Employee ID : %d\n",e[i].id);
      printf("Employee Name : %s",e[i].name);
      printf("Employee salary : %d\n\n",e[i].salary);
    }
    return 0;
}