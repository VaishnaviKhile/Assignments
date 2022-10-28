#include<iostream>
using namespace std;
int main(){
    float a,b;
    char opr;
    cout<<" *** Calci operation ***"<<endl;
    cin>>a>>opr>>b;
    switch(opr){
        case '-':
          cout<<a<<opr<<b<<"="<<a-b;
          break;
        case '+':
          cout<<a<<opr<<b<<"="<<a+b;
          break;
         case '*':
          cout<<a<<opr<<b<<"="<<a*b;
          break;
           case '/':
          cout<<a<<opr<<b<<"="<<a/b;
          break;
         case '%':
           bool isNum1Int, isNum2Int;
          
           isNum1Int=(int(b)==b);
           isNum2Int=(int(b)==b);
         if (isNum1Int==true && isNum2Int==true )
          { cout<<a<<opr<<b<<"="<<int(a)%int(b);//% remainder of whole no.
          }
          break;
        default:
          cout<<"Invalid operator...";
          break;
          
          
        

    }


}