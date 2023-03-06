/*4. Create Product class and convert Product type to Item type using casting operator
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
class Item
{
    int a;
    public:
    Item(int b)
    {
        a=b;
    }
    void display()
    {
        cout<<"Item = "<<a;
    }

 
};
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
    operator Item()
    {
        cout<<"Item() callled\n";
        return a+b;
    }
    
};



int main(){
    Product p(2,4);
    Item i=p;
    p.display();
    i.display();
    return 0;
}