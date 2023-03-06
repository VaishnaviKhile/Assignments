//6. Create a complex class and overload assignment operator for that class.
#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    void set()
    {   
       cout<<"\nEnter Complex No.  : \n ";
       cout<<"Real No.     :  ";
       cin>>a;
       cout<<"Imaginary No. :  ";
       cin>>b;
    }
    void display()
    {
        cout<<"\nComplex No.   :  "<<a<<"+"<<b<<"i\n"<<endl;
    }
    Complex operator=(const Complex &c)
    {
        cout<<"Assignment operator overloding";
        Complex temp;
        temp.a=c.a;
        temp.b=c.b;
        return temp ;
    }
};
int main(){
    Complex c,b;
    c.set();
    c.display();
    c=b;
    c.display();
    return 0;
}