/*8. Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.*/
#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
    void get()
    {
        cout<<"\n Enter Matrix Element (3x3): \n\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>a[i][j];
            }
            
        }
        
    }
    void operator-()
    {
        
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j]=-a[i][j];
            }
        }  
    }
    void display()
    {
        cout<<"\n Matrix is : \n\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<" "<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
        
    }
};
int main(){
    Matrix m;
    m.get();
    m.display();
    
    -m;
    m.display();
    return 0;
}