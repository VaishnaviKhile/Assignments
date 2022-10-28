#include<iostream>
using namespace std;
int main(){
    double ASalary;
    cout << "Enter the annual salary:";
    cin>>ASalary;
    double MSalary=ASalary/12;
    cout<<"Your monthly salary:"<<MSalary<<endl;
    cout<<"In 10 years you will earn:"<<ASalary*10;
    char  character='s';//varname can't contain spacial char
    // Datatype int , float , char, double, boolean
     int yearOfBirth=2001;
     char gender='f';
     bool isOlderThan18=true;
     float avgGrade=3.4;
     double balance=483947;
     cout<<"\n size of int is:"<<sizeof(int)<<"bytes";
    //  -1,-2,....,-2147483648  

     cout<<"\n Int min value :"<<INT_MIN<<endl;
    //  0,1,2,3..., 2147483647
     cout<<"Int max value:"<<INT_MAX<<endl;
     cout<<"size  of unsigned int is "<<sizeof(unsigned int)<<" bytes\n";
     cout<<"UInt max value "<<UINT_MAX<<endl;
     cout<<"\n size of char is:"<<sizeof(char)<<"bytes";
     cout<<"\n size of bool is:"<<sizeof(bool)<<"bytes";
     cout<<"\n size of float is:"<<sizeof(float)<<"bytes";
     cout<<"\n size of double is:"<<sizeof(double)<<"bytes\n";
     int intMax=INT_MAX;
     cout<<intMax<<endl;
     cout<<intMax+1<<endl;// datatype overflow1 
    //ASCII-American Standard code for information interchange
     cout<<(int)'a'<<endl;
     cout<<int('a')<<endl;
     cout<<int('A')<<endl;
     cout<<char(85)<<endl;
     char a,b,c,d,e;
     cout<<"enter 5 letter"<<endl;
     cin>>a>>b>>c>>d>>e;
     cout<<"ASCII message:"<<int(a)<<int(b)<<int(c)<<int(d)<<int(e)<<endl;
     cout<<"Decoded message:"<<char(int(a))<<char(int(b))<<char(int(c))<<char(int(d))<<char(int(e))<<endl;




}