//8. Define a class Bank and define member functions to read principal , rate of interest and year. Another member functions to calculate simple interest and display it. Initialise all details using constructor.
#include<iostream>
using namespace std;
class Bank
{
    float p,r,t,si,amount;
    public:
    void read()
    {
        cout<<"Enter Principle Amount::";
        cin>>p;
        cout<<"Enter Rate of Interest::";
        cin>>r;
        cout<<"Enter Number of Years::";
        cin>>t;
    }
    void simpleaInterest()
    {
        si=(p*r*t)/100;
        amount=si+p;
    }
    void Display()
    {
        cout<<"\n Principle Amount: "<<p;
        cout<<"\n\n Rate of Interest: "<<r;
        cout<<"\n\n Number of years: "<<t;
        cout<<"\n\n Interest: "<<si;
        cout<<"\n\n Total Amount: "<<amount<<endl;
    }
};
int main(){
    Bank b;
    b.read();
    b.simpleaInterest();
    b.Display();
    return 0;
}