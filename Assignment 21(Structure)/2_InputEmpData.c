//2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]
#include<stdio.h>
struct Employee
{
    int id;
    char name[30];
    int salary;
};
void InputData( struct Employee *e)
{
    printf("Enter Employee id : ");
    scanf("%d",&e->id);
    printf("Enter Employee name : ");
    fflush(stdin);
    fgets(e->name,30,stdin);
    printf("Enter Employee Salary : ");
    scanf("%d",&e->salary);
}
int main(){
    struct Employee e;
    InputData(&e);
    
    return 0;
}
