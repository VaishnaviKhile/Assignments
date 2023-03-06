//5. Create a student class and overload new and delete operators outside the class.
#include<iostream>
using namespace std;
class Student
{
    string myName;
    int age;
    public:
    void set()
    {
        cout<<"\n\nEnter Student Detail : \n"<<"\nname  : ";
        cin>>myName;
        cout<<"\nAge   : ";
        cin>>age;
    }
    void display()
    {
        cout<<"\n\n*********Students Detail************* \n\n"<<"Name  : "<<myName;
        cout<<"\nAge   : "<<age<<endl;
    }
    
};
void* operator new(size_t size)
{
    cout<<"\nNew Operator Overloading Globally \nsize = "<<size<<" bytes\n";
    void *p=malloc(size);
    return p;
}
void operator delete(void* p)
{   cout<<"\nDelete Operator Overloading Globally\n";
    free(p);
}
int main(){
    Student* s=new Student;
    int *p=new int;
    s->set();
    s->display();
    delete(s);
    delete(p);
    return 0;
}