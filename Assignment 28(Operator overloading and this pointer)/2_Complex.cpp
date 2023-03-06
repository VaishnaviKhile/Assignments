/*2. Define a class Complex with appropriate instance variables and member functions. One of the functions should be setData() to set the properties of the object. Make sure the names of formal arguments are the same as names of instance variables.*/
#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    
    void setData(int a,int b)//this pointer
    {   
       this->a=a;
       this->b=b;
    }
    /*Complex(int a,int b):a(a),b(b)//initializer list
    {   
       a=a;
       b=b;
    }*/

    void display()
    {
        cout<<"\nComplex No.   :  "<<a<<"+"<<b<<"i\n"<<endl;
    }
};
int main(){
    int a,b;
    Complex c;
    cout<<"\nEnter Complex No.  : \n\n";
    cout<<"Real No.     :   ";
    cin>>a;
    cout<<"Imaginary No.:   ";
    cin>>b;
    c.setData(a,b);
    c.display();
    return 0;
}