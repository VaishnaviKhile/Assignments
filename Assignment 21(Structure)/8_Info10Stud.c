//8. Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
struct student
{
    char name[20];
    int rollNo;
    int marks;
}s[10];

int main(){
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("%d.  Enter Name : ",i+1);
        fflush(stdin);
        fgets(s[i].name,20,stdin);
        fflush(stdin);
        printf("    Enter roll no. : ");
        scanf("%d",&s[i].rollNo);
        printf("    Enter Marks : ");
        scanf("%d",&s[i].marks);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\n\n%d. Name : %s   Roll no. : %d\n   Marks : %d\n",i+1,s[i].name,s[i].rollNo,s[i].marks);
    }
    
    
    return 0;
}