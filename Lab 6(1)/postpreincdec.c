#include <stdio.h>
int main()
{
    int a=3,b=4,c=5,d=6;
    printf("The result of pre increment is %d",++a);
    printf("\nThe result of post increment is %d to %d",b++,b);
    printf("\nThe result of pre decrement is %d",--c);
    printf("\nThe result of post decrement is %d to %d",d--,d);
    return 0;

}
