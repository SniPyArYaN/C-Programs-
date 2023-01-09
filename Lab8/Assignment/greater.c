#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter number a-->");
    scanf("%d",&a); 
    printf("Enter number b-->");
    scanf("%d",&b); 
    printf("Enter number c-->");
    scanf("%d",&c); 
    if (a>b)
    {
        if(a>c)
        {
            printf("A is Greater");
        }
    
    }
    else if (b>c)
    {
        if(b>a)
        {
            printf("B is Greater");
        }
    } 
    else
    {
        printf("C is Greater");
    }


}