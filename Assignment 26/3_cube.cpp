//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class Cube
{
    int a,volume;
    public:
    Cube(int side)
    {
        a=side;
    }
    void Volume()
    {
       volume=a*a*a; 
    }
    void print()
    {
        cout<<"Volume of cube= "<<volume;
    }
 
};
int main(){
    int a;
    cout<<"Enter side of cube:";
    cin>>a;
    Cube c(a);
    c.Volume();
    c.print();
    return 0;
}