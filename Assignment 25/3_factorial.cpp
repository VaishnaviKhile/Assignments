//3. Define a class Factorial and define an instance member function to find the Factorial of a number using class.
#include<iostream>
using namespace std;
class Factorial
{
    int n;
    public:
    Factorial(int a)
    {
        n=a;
    }
    void fact()
    {
        int fact=1;
        for (int i = 2; i <= n; i++)
        {
            fact=fact*i;
        }
        cout<<n<<"!="<<fact;
    }
};
int main(){
    int a;
    cout<<"Enter no. to calculate factorial: ";
    cin>>a;
    Factorial f(a);
    f.fact();
    return 0;
}