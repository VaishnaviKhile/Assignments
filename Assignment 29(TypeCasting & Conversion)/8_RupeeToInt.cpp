/*8. Create a Rupee class and convert it into int. And Display it.
Example-
int main()
{
Rupee r = 10;
int x = r;
cout<<x;
return 0;
}
*/
#include<iostream>
using namespace std;
class Rupee
{
    int a;
    public:
    Rupee(){} 
    Rupee(int b)
    {
        a=b;
    }
    operator int()
    {
        return a;
    }
    void display()
    {
        cout<<"\nRupee = "<<a;
    }
};
int main(){
    Rupee r = 10;
    int x = r;
    r.display();
    cout<<"\nx = "<<x;
    return 0;
}