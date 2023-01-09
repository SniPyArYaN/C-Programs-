#include <stdio.h>
int main()
{
    int val=1,num,res;
    printf("Enter the number for which you want to find the table for : ");
    scanf("%d",&num);
    while (val<=10)
    {
        res=num*val;
        printf("%d x %d = %d \n",num,val,res);
        val++;

    }
}