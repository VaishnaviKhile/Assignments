//4. Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
class Counter
{
    static int count;
    public:
    Counter()
    {  
        count++;
        cout<<"Count="<<count<<endl;
    }
    int getCount()
    {
        return count;
    }
};
int Counter::count=0;
int main(){
    Counter a,b,c;
    return 0;
}