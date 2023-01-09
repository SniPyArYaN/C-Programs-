#include <stdio.h>
int main()
{
    int num,rev=0,dig=0;
    printf("Enter the number --> ");
    scanf("%d",&num);
    while (num!=0)
    {
        dig=num%10;
        rev=rev*10+dig;
        num=num/10;

    }
    printf("The number is reverse is --> %d",rev);
    return 0;
    

}