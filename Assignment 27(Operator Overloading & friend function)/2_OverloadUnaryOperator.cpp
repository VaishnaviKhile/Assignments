//2. Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;
class Unary
{
    int n;
    public:
    Unary(int a){
        n=a;
    }
    void display(){
        cout<<"Value of n: "<<n<<endl;
    }

    void operator++(void)//pre-increment
    {
        ++n;
    }
    void operator++(int)//post-increment
    { 
        n++;
        
    }
    void operator--(void)//pre-decrement
    {
        --n;
    }
    void operator--(int)// post-decrement
    {
        n--;
    }
};
int main(){
    int a;
    cout<<"Enter no.: ";
    cin>>a;
    Unary u(a);
    u.display();
    cout<<"After pre-increment:\n";
    ++u;
    u.display();
    cout<<"After post-increment:\n";
    u++;
    u.display();
    cout<<"After pre-decrement:\n";
    --u;
    u.display();
    cout<<"After post-decrement:\n";
    u--;
    u.display();
    
    return 0;
}