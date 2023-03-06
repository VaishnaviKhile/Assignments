//6. Define a class student and write a program to enter student details using constructor and define member function to display all the details.
#include<iostream>
using namespace std;
class Student
{ 
    string name,Grade;
    int Roll_No;
    public:
    Student(string a, int b, string c)
    {
        name=a;
        Roll_No=b;
        Grade=c;
    }
    void Display()
    {
        cout<<"Student name:"<<name<<"\nRoll no.:    "<<Roll_No<<"\nGrade :      "<<Grade;
    }
 
};
int main(){
    Student s1("Daniel", 20, "A");
    cout<<"Student Detail:\n";
    s1.Display();

    
    return 0;
}