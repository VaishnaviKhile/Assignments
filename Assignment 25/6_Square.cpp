//6. Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.
#include<iostream>
using namespace std;
class Square
{
 int n,sq;
 static int count;
    public:
    Square(int a){
        n=a;
    }

    void square()
    {   count++;
        sq=n*n;
        cout<<sq;
    }
    void printCount(){
        cout<<count;
    }

};
int Square::count=0;
int main(){
    
    Square r(2);
    cout<<"square of "<<2<<" is ";
    r.square();
    Square b(5); 
    cout<<"\nsquare of "<<5<<" is ";

    b.square();
    cout<<endl;
    r.printCount();
    cout<<" time square() call";
    return 0;
}