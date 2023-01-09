#include <stdio.h>
int main()
{
    float unit,new_unit,amt,final_amt,surge_charge;
    printf("Enter the unit -->");
    scanf("%f",&unit);
    if (unit<=50)
    {
        amt=0.50*unit;
        surge_charge=0.20*amt;
    }
    else if (unit>50 && unit<=150)
    {
        new_unit=(unit-50);
        amt=(0.5*50)+(0.75*new_unit);
        surge_charge=0.20*amt;
    }
    else if (unit>150 && unit<=250)
    {
        new_unit=(unit-150);
        amt=(0.5*50)+(0.75*100)+(1.2*new_unit);
        surge_charge=0.20*amt;
    }
    else if (unit>250)
    {
        new_unit=(unit-250);
        amt=(0.5*50)+(0.75*100)+(1.2*100)+(1.5*new_unit);
        surge_charge=0.20*amt;
    }
    final_amt=amt+surge_charge;
    printf("The units consumed by the consumer is -> %0.2f \n and the Electricity bill for that month is -> %0.3f",unit,final_amt);
    return 0;
    
}
