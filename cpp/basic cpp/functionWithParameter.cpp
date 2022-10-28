#include<iostream>
using namespace std;
// default parameter should assign value from last parameter we can't assign at middle or start
void introduceMe(string name,string city, int age){
    cout<<"My name is "<<name<<endl;
    cout<<"I am from "<<city<<endl;
    
    if (age!=0)
    {
        cout<<"I am "<<age<<"years old"<<endl;
    }
    

}
int main()
{
    // when we wanna take input from for function we define parameter in main() and pass that parameter to function so user can put his information
    string n,c;
    int a;
    cout<<"Enter name :"<<endl;
    cin>>n;
    cout<<"Enter country :"<<endl;
    cin>>c;
    cout<<"Enter age :"<<endl;
    cin>>a;
    introduceMe(n,c,a);
    
}




