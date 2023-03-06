//5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.
#include<stdio.h>
int main(){
    char a[][20]={"vaishnavi@gmail","v@gmail","V@gmail","Vaish@gmail","vgmail"};
    printf("List of email address : \n");
    for (int i = 0; i < 5; i++)
    {
      printf("%d. %s \n",i+1,a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        int flag=0;
        for (int j = 0; a[i][j]!='\0'; j++)
        {
            if (a[i][j]=='@')
            flag=1; 
        }
        if (flag==1)
        printf("%s-->Valid email\n",a[i]);
        else
        printf("%s-->Invalid address\n",a[i]);        
    }
    
    return 0;
}