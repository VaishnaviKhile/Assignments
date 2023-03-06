/*10. Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).*/

#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
    void get();
    Matrix operator+(Matrix m);
    void display();
};
void Matrix::get()
{   
    cout<<"\n Enter Matrix Element (3x3) : \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }
    
}
void Matrix::display()
{
    for (int i = 0; i < 3; i++)
    {
        cout<<" ";
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}
Matrix Matrix::operator+(Matrix m)
{   Matrix b;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b.a[i][j]=a[i][j]+m.a[i][j];
        }
        
    }
   
    return b;
    
}
int main(){
    Matrix m,n,p;
    m.get();
    n.get();
    cout<<"\n First Matrix  : \n\n";
    m.display();
    cout<<"\n Second Matrix  : \n\n";
    n.display();
    p=m+n;
    cout<<"\n Addition of Matrix  : \n\n";
    p.display();

    return 0;
}