//4. Create a student class and overload new and delete operators as a member function of the class.
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
    void* operator new(size_t size)
    {
        cout<<"New Operator Overloded \nsize = "<<size<<" bytes";
        void* p=malloc(size);
        return p;
    }
    void operator delete(void* p)
    {
        cout<<"Delete operator overloaded ";
        free(p);
    }
};
int main(){
    Student* s=new Student;
    s->set();
    s->display();
    delete(s);
    return 0;
}