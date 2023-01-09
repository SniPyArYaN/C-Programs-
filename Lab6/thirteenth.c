#include <stdio.h>
int main()
{
    int meter,km,rem;
    printf("Enter the value in meter --> ");
    scanf("%d",&meter);
    km=meter/1000;
    rem=meter-(km*1000);
    printf("The distance is %d Kilometers and %d Meters",km,rem);
    return 0;

}