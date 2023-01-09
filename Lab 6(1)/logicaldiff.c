#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter value for a--> ");
    scanf("%d",&a);
    printf("Enter value for b--> ");
    scanf("%d",&b);
    printf("Logical AND op--> %d",a&&b);
    printf("\nLogical OR op--> %d",a||b);
    printf("\nLogical NOT op--> %d",!b);
    printf("\nBitwise AND op--> %d",a&b);
    printf("\nBitwise OR op--> %d",a|b);
    printf("\nBitwise NOT op--> %d",~a);
    return 0;
    
}