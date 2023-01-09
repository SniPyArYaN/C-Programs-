#include <stdio.h>
int main()
{
    int num,first,last,prod;
    printf("Enter the number --> ");
    scanf("%d",&num);
    last=num%10;
    while (num>=10)
    {
        num=num/10;

    }
    first=num;
    prod=first*last;
    printf("The product of the first and the last digit of the number is %d",prod);
    return 0;

}