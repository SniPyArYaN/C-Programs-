#include <stdio.h>
int main()
{
    float cp,sp,loss,profit;
    printf("Enter the Cost Price --> ");
    scanf("%f",&cp);
    printf("Enter the Selling Price -->");
    scanf("%f",&sp);
    if (cp<sp)
    {
        profit=sp-cp;
        printf("Wohoo you made a PROFIT of Rs %0.2f on the sale !",profit);
    }
    else{
        loss=cp-sp;
        printf("Ahh you made a LOSS of Rs %0.2f on the sale !",loss);
    }
}