#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st number --> ");
    scanf("%d",&a);
    printf("Enter 2nd number --> ");
    scanf("%d",&b);
    printf("The 1st number before swap is : %d and the second number is : %d",a,b);
    (a^=b);(b^=a);(a^=b);
    printf("\nThe value for a after swap is %d and b is %d",a,b);
    return 0;

}