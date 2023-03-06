/*9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to
Lowercase and vice versa).*/
#include<iostream>
using namespace std;
class mystring
{
    char str[100];
    public:
    void getString();
    void operator!();
    void display();
};
void mystring::getString()
{
    cout<<"\n Enter String  :  ";
    cin>>str;
}
void mystring::operator!()
{
    for ( int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        if (str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    cout<<"\n\n Reverse String is : "<<str;
    
}
void mystring::display()
{
    cout<<str;
}
int main(){
    mystring a;
    a.getString();
    cout<<"\n\n String is  :  ";
    a.display();
    !a;
    return 0;
}