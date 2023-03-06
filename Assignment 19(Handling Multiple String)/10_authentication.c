//10. Create an authentication system. It should be menu driven.
#include<stdio.h>
int main(){
    char username[20],password[20],ch;
    printf("Enter Username : ");
    gets(username);
    printf("Enter Password less than 8 character : ");
    for (int i = 0; i < 8; i++)
    {
        ch=getchar();
        password[i]=ch;
        printf("*");
    }
    printf("\nEntered Password : %s",password);


    return 0;
}