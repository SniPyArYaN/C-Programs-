#include <stdio.h>
int main()
{
    int f;
    float c;
    printf("Enter the temperature in Fahrenheit --> ");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("The Temperature in Celcius would be --> %0.3f Celcius",c);
    return 0;
}