/* 7. Program to take the value from the user as input electricity unit charges and calculate total electricity bill according to the given condition . Using the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include<stdio.h>
int main(){
    int unit;
    float total, FinalTotal;
    printf("Enter electricity unit:");
    scanf("%d",&unit);
    switch (unit<=50)
    {
    case 1://unit<=50
        total=unit*0.5;
        break;
    case 0://unit>50
        switch (unit<=150)
        {
        case 1://unit<=150
            total=50*0.5+(unit-50)*0.75;
            break;
        case 0://unit>150
            switch (unit<=250)
            {
            case 1://unit<=250
                total=50*0.5+100*0.75+(unit-150)*1.2;
                break;
            case 0://unit>250
                total=50*0.5+100*0.75+100*1.20+(unit-250)*1.5;
                break;           
            }
        }
        break;
    }
    FinalTotal=total+total*0.2; //20% additional charges of total
    printf("Total Electricity bill is %f",FinalTotal);
    return 0;
}