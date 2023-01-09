#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number --> ");
    scanf("%d",&a);
    switch(a%2==0)
    {
        case 1:
            printf("The given no is even !");
        break;

        case 0:
            printf("The given no is odd !");
        break;


        default:
            printf("Invalid Input");
        break;
    }
    return 0;    
}