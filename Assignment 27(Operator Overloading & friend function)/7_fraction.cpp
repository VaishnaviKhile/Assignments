/*7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
*/
#include<iostream>
using namespace std;
class fraction
{   
    long numerator,denominator;
    public:
    fraction(long n=0 ,long d=0)
    {
        numerator=n;
        denominator=d;
    }
    fraction operator++()//pre-increment
    {
        numerator=++numerator;
        denominator=++denominator;
        return (*this);
    }
    fraction operator++(int)//post-decrement
    {
        fraction old=*this;
        numerator++;
        denominator++;
        return old;
    }
    friend istream& operator>>(istream &i, fraction &f);
    friend ostream& operator<<(ostream &o ,fraction &f);
};
istream& operator>>(istream &i, fraction &f)
{
    cout<<"\n Numerator    :  ";
    cin>>f.numerator;
    cout<<"\n Denominator  :  ";
    cin>>f.denominator;
    return cin;
}
ostream& operator<<(ostream &o, fraction &f)
{
    o<<f.numerator<<"/"<<f.denominator;
    return cout;
}
int main(){
    fraction f1,f2;
    cout<<"\n f1    :  ";
    cout<<f1;
    cout<<"\n f2    :  ";
    cout<<f2;
    cout<<"\n\n Enter 1st Fraction Value \n";
    cin>>f1;
    cout<<"\n f1++  :  ";
    f1++;
    cout<<f1;
    cout<<"\n ++f1  :  ";
    ++f1;
    cout<<f1;
    cout<<"\n\n Enter 2nd Fraction Value \n";
    cin>>f2;
    f2=++f1;
    cout<<"\n f2 = ++f1";
    cout<<"\n f1   :  ";
    cout<<f1;
    cout<<"\n f2   :  ";
    cout<<f2;
    f2=f1++;
    cout<<"\n\n f2 = f1++";
    cout<<"\n f1   :  ";
    cout<<f1;
    cout<<"\n f2   :  ";
    cout<<f2;
    return 0;


    return 0;
}