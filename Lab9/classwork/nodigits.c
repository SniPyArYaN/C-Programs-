#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number --> ");
    scanf("%d",&num);
    int dig=0;
    while (num!=0)
    {
        num=num/10;
        dig++;

    }
    printf("\nThe no of digits in the given no is : %d",dig);
    return 0;
}