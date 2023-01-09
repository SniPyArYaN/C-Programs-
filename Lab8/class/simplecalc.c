#include <stdio.h>
int main()
{
    float a,b;
    char operation;
    printf("Enter the operator (+,-,*,/) --> ");
    scanf("%c",&operation);
    printf("\nEnter the two operands --> ");
    scanf("%f %f",&a,&b);
    
    

    switch(operation)
    {
        case '+':
            printf("The sum of the two numbers is --> %0.2f",a+b);
            break;

        case '-':
            printf("The difference between the two numbers is --> %0.2f",a-b);
            break;

        case '*':
            printf("The product between the two numbers is --> %0.2f",a*b);
            break;

        case '/':
            printf("The result of the two numbers is --> %0.2f",a/b);
            break;

        default:
            printf("OOPS ! Sorry wrong operand, try again");

    }
    return 0;
}