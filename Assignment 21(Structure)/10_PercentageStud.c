/*10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.*/
#include<stdio.h>
struct Mark
{
    int rollNo;
    char name[30];
    int chem_mark,maths_marks,phy_marks;
};

int main(){
    struct Mark m[5];
    for (int i = 0; i < 2; i++)
    {
        printf("%d.  Enter Name : ",i+1);
        fflush(stdin);
        fgets(m[i].name,20,stdin);
        fflush(stdin);
        printf("    Enter roll no. : ");
        scanf("%d",&m[i].rollNo);
        printf("    Enter chemistry's mark: ");
        scanf("%d",&m[i].chem_mark);
        printf("    Enter physics's mark: ");
        scanf("%d",&m[i].phy_marks);
        printf("    Enter maths's mark: ");
        scanf("%d",&m[i].maths_marks);
    }
    for (int i = 0; i < 2; i++)
    {
        float percentage;
        percentage=((m[i].chem_mark+m[i].maths_marks+m[i].phy_marks)/3.0);
        printf("\n\n%d. Name : %s   Percentage : %f",i+1,m[i].name,percentage);
    }
 
    return 0;
}