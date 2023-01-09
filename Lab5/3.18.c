#include <stdio.h>
int main()
{
    int v;
    printf("Enter number --> ");
    scanf("%d",&v);
    if (v<100)
    {
        printf("Number %d is less than 100",v);
    }
    else
    {
        printf("Number %d is greater than 100",v);
    }
}