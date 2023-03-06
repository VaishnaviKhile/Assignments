//7. Create an Integer class and overload not operator for that class.
#include<iostream>
using namespace std;
class Integer
{
    int x;
    public:
    void set()
    {
        cout<<"Enter No.  : ";
        cin>>x;
    }
    void display()
    {
        cout<<"\nNumber = "<<x<<endl;
    }
    int operator!()
    {
        return -x;
    }
};
int main(){
    Integer a;
    a.set();
    a.display();
    cout<<"\nNegated Number : "<<!a;
    return 0;
}