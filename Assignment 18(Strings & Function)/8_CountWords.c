//8. Write a function to count words in a given string
#include<stdio.h>
int CountWords(char *a)
{
    int CountWord=0;
    

    for (int i = 0; a[i]!='\0'; i++)
    {
        if (a[i]==' ')
       CountWord++;
        
    }
    CountWord++;
    return CountWord;
    
}
int main(){
    char a[]="I am good boy";
    printf("Given String : %s\n",a);
    printf("No. of Words in string are %d",CountWords(a));
    return 0;
}