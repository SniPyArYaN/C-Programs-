#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,s,ar;
    printf("Enter the length of side 1 --> ");
    scanf("%f",&a);
    printf("Enter the length of side 2 --> ");
    scanf("%f",&b);
    printf("Enter the length of side 3 --> ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the circle is --> %0.2f",ar);
    return 0;

}