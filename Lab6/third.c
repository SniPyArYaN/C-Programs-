#include <stdio.h>
int main()
{
    float ar;
    int r;
    printf("Enter the value of radius --> ");
    scanf("%d",&r);
    ar=3.14*r*r;
    printf("The area of the given circle is --> %0.3f",ar);
    return 0;

}
