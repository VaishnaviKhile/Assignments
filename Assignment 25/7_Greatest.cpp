//7. Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.
#include<iostream>
using namespace std;
class Greatest
{int a,b,c,greatest;
    public:
    Greatest(int x, int y , int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void FindGreatestNum()
    {
        greatest=(a>b)?((a>c)?a:c):((b>c)?b:c);
    }
    void print(){
        cout<<"Greatest no. among "<<a<<","<<b<<","<<c<<" is "<<greatest;
    }
    
};
int main(){
    int a,b,c;
    cout<<"Enter 3 no. to find greatest among them:";
    cin>>a>>b>>c;
    Greatest g(a,b,c);
    g.FindGreatestNum();
    g.print();
    return 0;
}