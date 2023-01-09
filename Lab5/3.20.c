#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enetr three numbers -->");
    scanf("%d %d %d",&a,&b,&c);
    printf("\na= %d,b=%d,c=%d",a,b,c);
    if (a>b)
    {
        if (a>c)
        {
            printf("\na is greater");
        }
        else
        {
            printf("\nc is greater");
        }
    }
    else 
    {
        if (b>c)
        {
            printf("\nb is greater");
        }
        else 
        {
            printf("\nc is greater");
        }
    }
}