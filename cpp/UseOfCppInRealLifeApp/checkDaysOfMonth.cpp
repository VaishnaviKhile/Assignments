#include<iostream>
using namespace std;
int main()
{
 // leap year=(year%4==0 && year%100==0 || year%400==0)
 int m,y;
 cout<<"enter the year in number:";
 cin>>y;
 cout<<"\n Enter the month in number: "<<endl;
 cin>>m;
 switch (m)
 {
 case 2:
    ( y%4==0 && y%100==0 || y%400==0)?cout<<"29 days month":cout<<" 28 days month";
    break;
 case 4:
 case 6:
 case 9:
 case 11:"30 days month";
  break;
 case 1:
 case 3:
 case 5:
 case 7:
 case 8:
 case 10:
 case 12:cout<<" 31 days month";
    break;


 default: cout<<" not valid";

    break;
 }
}