#include <stdio.h>
int main()
{
    int a=10,b=25;
    printf("value before swap for a is : %d and b is : %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nvalue after swap for a is : %d and b is : %d",a,b);
    return 0;



}