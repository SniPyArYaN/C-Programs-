#include <stdio.h>
int main()
{
    int sec,min,hr;
    printf("Enter the value for Seconds --> ");
    scanf("%d",&sec);
    hr=(sec/3600);
    min=(sec-(hr*3600))/60;
    sec=sec-((hr*3600)+(min*60));
    printf("The time will be --> %d Hour(s) %d Minute(s) and %d Second(s)",hr,min,sec);
    return 0;


}