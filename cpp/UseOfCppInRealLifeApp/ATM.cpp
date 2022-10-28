#include<iostream>
using namespace std;
void menu(){
    cout<<"********* Show Menu ***********"<<endl;
    cout<<"1.Check Balance"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.Withdraw"<<endl;
    cout<<"4.Exit"<<endl;
}
int main(){
    // ATM functionality-check balance, deposit,withdraw,show menu
    int option;
    float balance=500;
     do
{
        menu();
    cout<<"press the option that you wanna operate:";
    cin>>option;
    
   switch(option)
    {
        case 1:
              cout<<"Available balance in your account "<<balance<<"$.";
              break;
        case 2:
         cout<<"how much amount you wanna deposit"<<endl;
         float d;
         cin>>d;
         balance +=d;
         cout<<"Your balance Now: "<<balance<<"$";
         break;
        case 3: 
          cout<<"Withdraw ammount:";
          double WD;
          cin>>WD;
          if(WD<=balance)
            balance-=WD;
        else
            cout<<"sorry but you don't have enough money";
        break;
    }
 }while(option!=4);

}