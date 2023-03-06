//5. Define a class Date and write a program to Display Date and initialise date object using Constructors.
#include<iostream>
using namespace std;
class Date
{
    int date,month,year;
    public:
    Date(int d, int m,int y)
    {
        date=d;
        month=m;
        year=y;
    }
    void Display()
    {
        cout<<"DATE:"<<date<<"/"<<month<<"/"<<year;
    }
 
};
int main(){
    int dd,mm,yy;
    cout<<"Enter date,month,year:";
    cin>>dd>>mm>>yy;
    Date d(dd,mm,yy);
    d.Display();
    return 0;
}