#include<iostream>
using namespace std;
int main(){
    int l;
    char s;
    cout<<"Enter the length:"<<endl;
    cin>>l;
    cout<<"Enter the symbol:"<<endl;
    cin>>s;
    cout<<endl;
    // for loop for triangle
    for(int i=1; i<=l; i++){
        for(int j=1; j<=i; j++)
      {
        cout<<s;
      }
      cout<<endl;
    }
   // for loop for inverted triangle
    for(int i=l; i>=1; i--){
        for(int j=1; j<=i; j++)
      {
        cout<<s;
      }
      cout<<endl;
    }
}
