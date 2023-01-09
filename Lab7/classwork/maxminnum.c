#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values --> ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("The Greatest number is --> %d",a);
        }
        else 
        {
            printf("The Greatest number is --> %d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("The Greatest number is --> %d",b);
        }
        else 
        {
            printf("The Greatest number is --> %d",c);
        }
    }
}   
