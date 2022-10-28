#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter whole no.:"<<endl;
    cin>>n;
    if(n%2==0)
    {
        cout<<n<<" is even no."<<endl;
    }
    else
   {
         cout<<n<<" is odd no.";
    }

// determine triangle type
 float a,b,c;
  cout<<"Enter side of triangle "<<endl;
  cin>>a>>b>>c;
  if (a==b && b==c)
  {
    cout<<"this is equilateral triangle";
  }
  else{
    if(a!=b && b!=c && a!=c ){
        cout<<"Scalen triangle";
    }
    else{
        cout<<"isoscales triangle";
    }
  }
  
}