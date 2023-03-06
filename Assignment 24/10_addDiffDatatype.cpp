//10. Write functions using function overloading to add two numbers having different datatypes.
#include<iostream>
using namespace std;
void add(int x,float y)
{
    cout<<x<<"+"<<y<<"="<<x+y;
}
void add(float a, int b){
    cout<<a<<"+"<<b<<"="<<a+b;
}
int main(){
    int c;
    cout<<"Enter choice for addition of different datatype:\n1.1st int no. 2nd real no.\n2.1st real no. 2nd integer no.\n";
    cin>>c;
    switch (c)
    {
    case 1:
        int x;
        float y;
        cout<<"Enter integer no.:";
        cin>>x;
        cout<<"Enter real no.:";
        cin>>y;
        add(x,y);
        break;
    case 2:
        float a;
        int b;
        cout<<"Enter real no.:";
        cin>>a;
        cout<<"Enter integer no.:";
        cin>>b;
        
        add(a,b);
        break;
    
    default:
        cout<<"ENter Valid choice";
        break;
    }
    
    return 0;
}