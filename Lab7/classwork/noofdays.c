#include <stdio.h>
int main()
 {
    int m;
    printf("Enter the desired month in form of number--> :");
    scanf("%d", &m);
    if( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        printf("The month has 31 days");
    else if( m == 4 || m == 6 || m == 9 || m == 11)
        printf("The month has 30 days");
    else if( m == 2)
        printf("The month is february and has 28/29 days");
    else if( m>12)
        printf("The month entered is invalid");
    return 0;
 }