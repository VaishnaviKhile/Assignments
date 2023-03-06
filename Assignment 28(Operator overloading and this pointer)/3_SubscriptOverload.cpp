/*3. Overload subscript operator [] that will be useful when we want to check for an index out of bound.*/
#include<iostream>
using namespace std;
class Array
{
    int a[100];
    const int size=100;
    public:
    void display(int index)
    {
        cout<<a[index]<<endl;
    }
    void setArray(int n, int index)
    {
        if (index >=size)
        {
            cout<<"Array Index Out of Bound Exception"<<endl;
            exit(0);
        }
        a[index]=n;
    }
    int operator[](int index)
    {
        if (index>=size)
        {
            cout<<"Array Index out of Bound Exception";
            exit(0);
        }
        
        return a[index];
    }
};
int main(){
    int n,index;
    Array a;
    cout<<"\nEnter index in array where u wanna store value  : ";
    cin>>index;
    cout<<"Enter value that u wanna store : ";
    cin>>n;
    a.setArray(n,index);
    cout<<"a["<<index<<"] = ";
    a.display(index);
    cout<<"a["<<index<<"] = "<<a[index];//[] overloading

    return 0;
}