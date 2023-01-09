#include <stdio.h>
int main()
{
    int paise,rupee,rem;
    printf("Enter the value for Paise --> ");
    scanf("%d",&paise);
    rupee=paise/100;
    rem=paise%100;
    printf("The amount comes up as %d Rupees and %d Paise",rupee,rem);
    return 0;
    
}