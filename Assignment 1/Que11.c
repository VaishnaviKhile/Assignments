//WAP to take time as an input in below given format and convert the time format anddisplay the result as given below.User Input date format – “HH:MM”Output format – “HH hour and MM Minute”Example –“11:25” converted to “11 Hour and 25 Minute”
#include<stdio.h>
int main(){
    int HH,MM;
    printf("Enter a time in HH:MM format:");
    scanf("%d:%d",&HH,&MM);
    printf("\"%d:%d\" converted to \"%d Hour and %d Minute\"",HH,MM,HH,MM );
    

    return 0;
}