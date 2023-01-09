#include <stdio.h>
int main()
{
    int a,b;
    float diff;
    printf("Enter the value for a --> ");
    scanf("%d",&a);
    printf("Enter the value for b --> ");
    scanf("%d",&b);
    if (a>b)
    {
        diff=a-b;
        printf("The difference between two nos is --> %0.2f",diff);

    }
    else
    {
        diff=b-a;
        printf("The difference between two nos is --> %0.2f",diff);

    }
    return 0;
}