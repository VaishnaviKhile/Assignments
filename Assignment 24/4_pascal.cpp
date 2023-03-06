//4. Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
class Pascal
{   int x;
    public:
    Pascal(int n)
    {
        x=n;
    }
    int fact(int a)
    {
        int fact=1;
        for (int i = 2; i <= a; i++)
            fact=fact*i;
        return fact;
    }
    void pascal()
    {
        for (int i = 0; i <=x; i++)
        {
            for (int j = 0; j <=i; j++)
            {
                cout<<fact(i)/(fact(j)*fact(i-j));
            }
            cout<<endl;
        }
        
    }
};
int main(){
    int x;
    cout<<"Enter no. to print pascal traingle:";
    cin>>x;
    Pascal p(x);
    cout<<"Pascal Triangle:\n";
    p.pascal();
    return 0;
}