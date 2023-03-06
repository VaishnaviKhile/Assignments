//4. Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class.
#include<iostream>
using namespace std;
class LargestNumber
{
    int a,b,c,largestNum;
    public:
    LargestNumber(int x, int y , int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void FindLargestNum()
    {
        largestNum=(a>b)?((a>c)?a:c):((b>c)?b:c);
    }
    void print(){
        cout<<"Largest no. among "<<a<<","<<b<<","<<c<<" is "<<largestNum;
    }
};
int main(){
    int a,b,c;
    cout<<"Enter 3 no. to find largest among them:";
    cin>>a>>b>>c;
    LargestNumber l(a,b,c);
    l.FindLargestNum();
    l.print();
    
    return 0;
}