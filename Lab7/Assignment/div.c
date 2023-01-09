#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number --> ");
    scanf("%d",&a);
    if (a%5==0)
    {
        if(a%11==0)
        printf("The number is divisible by both 5 and 11");

        else
        printf("The number is not divisible by both of them");
    }
    else{
        printf("The number is not divisible by both of them");
    }
    
    return 0;
}