//7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include<stdio.h>
void ConsonantVowels(char *s)
{
    int Consonant=0,Vowel=0;
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' ||s[i]=='O' || s[i]=='U' )
        Vowel++;
        else
        Consonant++;
    }
    printf("\nNumber of Vowels in %s : %d",s,Vowel);
    printf("\nNumber of Consonants in %s : %d",s,Consonant);
    
}
int main(){
    char a[20]="Vaishnavi";
    printf("String : %s",a);
    ConsonantVowels(a);
    return 0;
}