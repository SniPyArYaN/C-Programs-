#include <stdio.h>
int main()
{
    float far,cel;
    printf("Enter the value of temperature in Celcius --> ");
    scanf("%f",&cel);
    far=(cel*9/5)+32;
    printf("The temperature in Farhenheit is --> %0.2f",far);
    return 0;
}