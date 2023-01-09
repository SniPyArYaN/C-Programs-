#include <stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter the value for N -->");
    scanf("%d",&n);
    while(n>=i)
    {
        sum+=i;
        i+=2;

    }
    printf("The sum of all odd numbers till n is --> %d",sum);
}