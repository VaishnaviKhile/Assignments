#include<iostream>
using namespace std;
int main(){
    int HostUserNum, guessUserNum;
    cout<<"host:";
    cin>>HostUserNum;
    system("cls");
    cout<<"guest:";
    cin>>guessUserNum;

    (HostUserNum==guessUserNum)?cout<<"correct You win!!":cout<<"Sorry, Guess is not right";


    // if(HostUserNum==guessUserNum)
    //   cout<<" correct You win";
    // else
    //    cout<<"failed";



    


}