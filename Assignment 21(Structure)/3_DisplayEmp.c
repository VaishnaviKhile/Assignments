//3. Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
struct Employee
{
    int id;
    char name[30];
    int salary;
};
void Display(struct Employee e)
{
    printf("Employee ID : %d",e.id);
    printf("Employee Name : %s",e.name);
    printf("Employee salary : %d",e.salary);
}
void InputData( struct Employee *e)
{
    printf("Enter Employee id : ");
    scanf("%d",&e->id);
    printf("\nEnter Employee name : ");
    fflush(stdin);
    fgets(e->name,30,stdin);
    printf("Enter Employee Salary : ");
    scanf("%d",&e->salary);

}

int main(){
    struct Employee e;
    InputData(&e);
    Display(e);
    return 0;
}