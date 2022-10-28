#include<iostream>
using namespace std;
int main(){
    // BMI (body mass index) calculator
    // formula=weight/height*height
    // underweight<18.5
    // Normal weight 18.5-24.9
    // overweight >25
     float w,h,bmi ;
     cout<<"Weight(kg),height(m):";
     cin>>w>>h;
      bmi=w/(h*h);
      if (bmi<18.5)
        cout<<"you are underweight";
      else if (bmi>25)
       cout<<"Overweight"<<endl;
      else
        cout<<"you have normal weight";
      
    cout<<"your bmi is:"<<bmi;





}