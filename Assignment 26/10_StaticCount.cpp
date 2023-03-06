//10. Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display the result.
#include<iostream>
using namespace std;
class StaticCount
{ 
    static int count;
    public:
    void IncrementCount()
    {
        count++;
    }
    void Display()
    {
        cout<<"Count= "<<count;
    }
};
int StaticCount::count=0;
int main(){
    StaticCount s;
    s.IncrementCount();
    s.IncrementCount();
    s.IncrementCount();
    s.Display();
    return 0;
}