//9. Write a program to store information of n students and display them using structure
#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[20];
    int rollNo;
    int marks;
};
int main(){
    int n,i;
    struct student *s;
    printf("Enter No. of Student : ");
    scanf("%d",&n);
    s=(struct student*)calloc(n,sizeof(struct student));
    for ( i = 0; i < n; i++)
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
    for (int i = 0; i < n; i++)
    {
        printf("\n\n%d. Name : %s   Roll no. : %d\n   Marks : %d\n",i+1,s[i].name,s[i].rollNo,s[i].marks);
    }
    
    return 0;
}