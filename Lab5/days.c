#include <stdio.h>
int main()
{
    int months, days;
    printf("Enter Days \n");
    scanf("%d", &days);
    months=days/30;
    days=days%30;
    printf("Months=%d Days=%d", months, days);
}