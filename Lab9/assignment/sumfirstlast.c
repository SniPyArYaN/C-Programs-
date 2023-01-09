#include <stdio.h>
int main()
{
    int num,first,last,sum;
    printf("Enter the number --> ");
    scanf("%d",&num);
    last=num%10;
    while (num>=10)
    {
        num=num/10;

    }
    first=num;
    sum=first+last;
    printf("The fsum of the first and the last digit of the number is %d",sum);
    return 0;

}