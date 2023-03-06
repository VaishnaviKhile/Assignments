//9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
using namespace std;
void max(int a,int b)
{
    a>b?cout<<a:cout<<b;
}
void max(float x, float y){
    x>y?cout<<x:cout<<y;
}
int main(){
    int c;
    cout<<"Enter choice:\n1.maximum of integer\n2.maximum of real no.\n";
    cin>>c;
    switch (c)
    {
    case 1:
        int x,y;
        cout<<"Enter two no.:";
        cin>>x>>y;
        cout<<"Maximum of "<<x<<" & "<<y<<" is ";
        max(x,y);
        break;
    case 2:
        float a,b;
        cout<<"Enter two real no.:";
        cin>>a>>b;
        cout<<"Maximum of "<<a<<" & "<<b<<" is ";
        max(a,b);
        break;
    
    default:
    cout<<"ENter VaLid ChoIce"
        break;
    }
      return 0;
}