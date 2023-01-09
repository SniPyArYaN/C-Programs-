#include <stdio.h>
int main()
 {
    int a,b,c;
    printf("Enter the 3-Sides of the triangle :");
    scanf("%d %d %d", &a, &b, &c);
    if( a==b && b==c && c==a )
        printf("The triangle is equilateral");
    else if( a==b || b==c || c==a )
        printf("The triangle is isosceles");
    else
        printf("This is a scalene triangle");
    return 0;
 }