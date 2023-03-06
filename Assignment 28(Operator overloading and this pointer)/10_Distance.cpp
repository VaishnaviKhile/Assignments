/*10. Create a Distance class having 2 instance variable feet and inches. Also create default constructor and parameterized constructor takes 2 variables . Now overload () function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and inches = a+b + 15.*/
#include<iostream>
using namespace std;
class Distance
{
    float feet, inches;
    public:
    Distance()
    {

    }
    Distance(int a,int b)
    {
        feet=a;
        inches=b;
    }
    Distance operator()(float a,float b,float c)
    {   Distance d;
        d.feet=a+c+5;
        d.inches=a+b+15;
        return d;
    }
    void display()
    {
        cout<<"\nfeet = "<<feet<<"\nInches = "<<inches;
    }
};
int main(){
    Distance d(10,5),b;
    d.display();
    b=d(3,4,5);
    b.display();

    return 0;
}