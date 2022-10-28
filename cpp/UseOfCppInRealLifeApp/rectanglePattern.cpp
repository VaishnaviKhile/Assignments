#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // square pattern for any symbol
    int h,w;
    char s;
    cout<<"height:"<<endl;
    cin>>h;
    cout<<"width:"<<endl;
    cin>>w;
    cout<<"symbol:"<<endl;
    cin>>s;
    for(int i=1; i<=h; i++){
        for (int j = 1; j<=w; j++)
        {
            cout<<setw(3)<<s<<" ";
        }
        cout<<endl;
    }
}