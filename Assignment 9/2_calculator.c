/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include<stdio.h>
int main(){
    int a,b;
    char menu;
    while (1)
    {   printf("a.Addition\nb.Subtraction\nc.Multiplication\nd.Division\ne.Exit\n");
        printf("To perform above operation enter option:");
        fflush(stdin);
        scanf("%c",&menu);
        fflush(stdin);
        switch (menu)
        {
          case 'e':
                return 0;
                break;
        }

         printf("Enter two no. to perform above operation: ");
        scanf("%d %d",&a,&b);
        
    
       
        switch (menu)
        {
        case 'a':
            printf("Addition of %d+%d= %d\n",a,b,a+b);
            break;
        case 'b':
             printf("Subtraction of %d-%d= %d\n",a,b,a-b);
            break;
        case 'c':
             printf("Multiplication of %d*%d= %d\n",a,b,a*b);
            break;
        case 'd':
             printf("Division of %d/%d= %d\n",a,b,a/b);
            break;
        
        default:
             printf("Please Enter Correct Option\n");
            break;
        }
        
        

    }
    
    
    
}