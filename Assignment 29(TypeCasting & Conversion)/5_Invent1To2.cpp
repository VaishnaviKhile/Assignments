/*5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
Invent1 x(4,5);
Invent2 y;
float z;
z = x; // Invent1 to float
y = x; // Invent1 to Invent2
return 0;
}
*/
#include<iostream>
using namespace std;
class Invent1
{   public:
    float x,y;

    Invent1(float a,float b)
    {
        cout<<"invent1() constructor called\n";
        x=a;
        y=b;
    }
    operator float()
    {
        return x+y;
    }
};
class Invent2
{   public:
    float x,y;
    Invent2()
    {
        cout<<"Invent2() default constructor called\n";
    }
    Invent2(Invent1 a)
    {
        cout<<"Invent2 constructor called\n";
        x=a.x;
        y=a.y;
    }
    
};
int main(){
    Invent1 x(4,5);
    Invent2 y;
    float z;
    z = x; // Invent1 to float
    y = x; // Invent1 to Invent2
    cout<<"z = "<<z;
    cout<<"\ny.x = "<<y.x<<"\ny.y = "<<y.y;

    return 0;
}