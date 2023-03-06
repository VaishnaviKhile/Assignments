/*9. Define a class Bill and define its member function get() to take detail of customer , calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/
#include<iostream>
using namespace std;
class Bill
{   string name;
    int unit,id;
    float Total;
    public:
    void get()
    {
        cout<<"Enter Customer Name:: ";
        cin>>name;
        cout<<"Enter Customer ID:: ";
        cin>>id;
        cout<<"Enter electricity consumption unit:: ";
        cin>>unit;
    }
    float calculateBill()
    {
        unit<=100?Total=unit*1.20:(unit<=200?Total=100*1.20+(unit-100)*2:Total=100*1.20+100*2+(unit-200)*3);
        return Total;
    }
};
int main(){
    Bill b;
    b.get();
    cout<<"Total electricity bill = "<<b.calculateBill();
    return 0;
}