#include <stdio.h>
int main()
{
    int b,h;
    float ar;
    printf("Enter the base length for the triangle --> ");
    scanf("%d",&b);
    printf("Enter the height for the triangle --> ");
    scanf("%d",&h);
    ar=0.5*b*h;
    printf("The area of the triangle is --> %0.3f sq.units",ar);
    return 0;

}