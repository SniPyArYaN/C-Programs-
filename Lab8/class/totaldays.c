#include <stdio.h>
int main()
{
    int month;
    printf("Enter month number --> ");
    scanf("%d",&month);
    switch (month)
    {
        case 1:
            printf("The given month has 31 days");
            break;

        case 2:
            printf("The given month has 28/29 days");
            break;

        case 3:
            printf("The given month has 31 days");
            break;

        case 4:
            printf("The given month has 30 days");
            break;

        case 5:
            printf("The given month has 31 days");
            break;

        case 6:
            printf("The given month has 30 days");
            break;

        case 7:
            printf("The given month has 31 days");
            break;

        case 8:
            printf("The given month has 31 days");
            break;

        case 9:
            printf("The given month has 30 days");
            break;

        case 10:
            printf("The given month has 31 days");
            break;

        case 11:
            printf("The given month has 30 days");
            break;

        case 12:
            printf("The given month has 31 days");
            break;   

    
    default:
        printf("The given month is invalid");
        break;
    }
    return 0;
}