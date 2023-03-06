/*10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.

Example-
int main()
{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
}
*/

#include<iostream>
using namespace std;
class Rupee
{
    public:
    int a;
    Rupee(){} 
    Rupee(int b)
    {
        a=b;
    }
    void display()
    {
        cout<<"\nRupee = "<<a;
    }
};
class Dollar
{
    int d;
    public:
    Dollar(){}
    Dollar(Rupee r)
    {
        d=r.a;
    }
    void display()
    {
        cout<<"\nDollar($) = "<<d;
    }
    operator Rupee()
    {
        return d;
    }
};
int main(){
    Rupee r = 23;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}