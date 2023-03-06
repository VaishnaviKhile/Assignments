/*
3. Create a Product class and convert Product type to Item type using constructor
int main()
{
Item i1;
Product p1;
p1.setData(3,4);
i1=p1;
return 0;
}
*/
#include<iostream>
using namespace std;

class Product
{
private:
    int a,b;

public:
    Product(int a,int b):a(a),b(b)
    {
        
    }
    void display()
    {
        cout<<"a = "<<a<<"\nb = "<<b<<endl;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    
};
class Item
{
    int a;
    public:
    Item(Product p)
    {
        cout<<"Type Casting using Constructure";
        a=p.getA()+p.getB();
    }
    void display()
    {
        cout<<"Item = "<<a;
    }

};



int main(){
    Product p(2,4);
    Item i=p;
    p.display();
    i.display();

    return 0;
}