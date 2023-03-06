/*6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.*/
#include<iostream>
#include<Cstring>
using namespace std;
class CString
{   public:
    char a[50];
    void getString()
    {
        cout<<"\n String :  ";
        cin>>a;
    }
    void display()
    {
        cout<<a<<endl;
    }
   CString operator+(CString x)
    {
        CString s;
        strcpy(s.a,a);
        strcat(s.a ,x.a);
        return s;

    }
    int operator==(CString &s);
};
int CString::operator==(CString &s)
{
    int flag = 1;
    for (int i = 0; a[i]!='\0'; i++)
    {
        if (a[i]!=s.a[i])
        {
            flag=0;
            break;
        }
        
    }
    return flag;
}
int main(){
    CString a,b,c;
    int flag=0;
    cout<<"Enter First String   :  ";
    a.getString();
    cout<<"Enter Second String   :  ";
    b.getString();
    cout<<"-----------------------------";
    cout<<"\n\n First String is       :   ";
    a.display();
    cout<<"\n\n Second String is      :  ";
    b.display();
    cout<<"\n------------------------------";
    c=a+b;
    cout<<"\n\n Concatenated String is      :  ";
    c.display();
    flag=(a==b);
    if (flag==1)
    cout<<"\n\n Both string are Equal";
    else
    cout<<"\n\n String are Not Equal";
    
    return 0;
}
