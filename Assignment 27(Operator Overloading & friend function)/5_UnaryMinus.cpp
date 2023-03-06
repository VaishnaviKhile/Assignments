/*5. Consider following class Numbers
class Numbers
{

int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.*/
#include<iostream>
using namespace std;
class Numbers
{
    int x,y,z;
    public:
    void get()
    {
        cout<<"Enter Three Numbers: ";
        cout<<"\n-----------------------";
        cout<<"\nFirst Number   :  ";
        cin>>x;
        cout<<"\nSecond Number  :  ";
        cin>>y;
        cout<<"\nThird Number   :  ";
        cin>>z;
    }
    void operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }
    void display()
    {
        cout<<"x="<<x<<"\ny="<<y<<"\nz="<<z;
    }
};
int main(){
    Numbers n;
    n.get();
    cout<<"\n\n Numbers are : \n\n";
    n.display();
    -n;
    cout<<"\n\n Negated Numbers :\n\n";
    n.display();
    return 0;
}