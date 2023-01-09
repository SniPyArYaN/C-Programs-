#include <stdio.h>
int main()
{
    int num,dig,sum=0;
    printf("Enter the number --> ");
    scanf("%d",&num);
    while(num!=0)
    {
        dig=num%10;
        sum+=dig;
        num=num/10;
    }
    printf("The sum of the digits of the number is --> %d",sum);
    return 0;

}