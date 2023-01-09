#include <stdio.h>
int main()
{
    int n,sum=0,i=1,temp=0;
    printf("Enter the value for N --> ");
    scanf("%d",&n);
    while(n>=i)
    {
        sum+=i;
        i++;
        

    }
    printf("The sum of all naturals number till n is : %d",sum);
    return 0;
}