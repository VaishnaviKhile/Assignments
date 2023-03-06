//7. From the list of IP addresses, check whether all ip addresses are valid.
//strtok(ptr,separator)->string to token,atoi()->ascii to int
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int Validate_number(char *str){
    while (*str)
    {
        if (!isdigit(*str))
        {
            return 0;
        }
        str++;
    }
    return 1;
}
int ValidateIP(char *ip)
{
    int i,num,dots=0;
    char *ptr;
    if (ip==NULL)
        return 0;
    
    ptr=strtok(ip,".");
    
    if(ptr == NULL)
    return 0;
    while (ptr)
    {
        if(Validate_number(ptr)==0)
        return 0;
        num=atoi(ptr);
        if (num>=0 && num<=255)
        {
            ptr=strtok(NULL,".");
            if (ptr!= NULL)
            dots++;
        }
        else
        return 0;
    }
    if(dots!=3)
    return 0;
    
    return 1;
}
int main(){
    char a[5][20]={"244.232.3.242",
                   "234.5.6.1",
                   "24.53.5.73",
                   "121.0.23.352",
                   "1.2.3.4"};
    char b[5][20];
    printf("List of IP address :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n",a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        ValidateIP(a[i])?printf("%d-Valid IP\n",i+1):printf("%d-->Invalid IP\n",i+1);
    }
    
    
        
           
              
    return 0;
}
