/*8. Create a Coordinate class for 3 variables x,y and z and overload comma operator such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and c3 are objects of 3D coordinate class.*/
#include<iostream>
using namespace std;
class Coordinate
{
    int x,y,z;
    public:
    void set()
    {
        cout<<"Enter 3 no.  :  ";
        cin>>x>>y>>z;
    }
    Coordinate operator,(Coordinate b)
    {
        Coordinate c;
        c.x=b.x;
        c.y=b.y;
        c.z=b.z;
        return c;
    }
    void display()
    {
        cout<<"\nThree Numbers are  : "<<x<<" "<<y<<" "<<z<<endl;
    }
};
int main(){
    Coordinate a,b,c;
    cout<<"Enter first 3D coordinate : \n";
    a.set();
    a.display();
    cout<<"\nEnter Second 3D coordinate : \n";
    b.set();
    b.display();
    c=(a,b);
    c.display();

    return 0;
}