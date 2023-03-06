//6. Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
int main(){
    char a[][20]={"kanak","nayan","nitin","Vaishnavi","hannah"};
    printf("List of string : \n");
    for (int i = 0; i < 5; i++)
    {
      printf("%d. %s \n",i+1,a[i]);
    }
    for (int i = 0; i < 5; i++)
    {   int length=0,flag=0;
        for(int j=0; a[i][j]!='\0';j++)
        {
            length++;
        }
        for (int j = 0,k=length-1; j<=k; j++,k--)
        {
            if (a[i][j]!=a[i][k])
            {
              flag=1;
              break;
            }
            
        }
        if (flag==0)
        {
          printf("\n%s --> Palindrome",a[i]);
        }
        else
        {
          printf("\n%s --> Not Palindrome",a[i]);
        }
    }
    
    return 0;
}