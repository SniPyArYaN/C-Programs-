#include <stdio.h>
int main()
{
    int num,first,last;
    printf("Enter the number --> ");
    scanf("%d",&num);
    last=num%10;
    while (num>=10)
    {
        num=num/10;

    }
    first=num;
    printf("The first digit of the entered number is %d and the last digit is %d",first,last);
    return 0;

}