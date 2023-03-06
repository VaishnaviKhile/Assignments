/*8. Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”},
word1 = “the”, word2 = “fox”, OUTPUT : 2 )
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char s[][20]={"the","quick","brown","fox","quick"};
    char word1[]="the",word2[]="fox";
    int ans=0,a=-1,b=-1;
    printf("Word List : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n",s[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(s[i],word1)==0)
        a=i;
        if (strcmp(s[i],word2)==0)
        b=i;
        if (a!=-1 && b!=-1)
        ans=abs(a-b); 
    }
    if (ans!=0)
     printf("Minimum distance between %s and %s is %d",word1,word2,--ans);
    else
    printf("String not define in List....");
    
    
   
    return 0;
}