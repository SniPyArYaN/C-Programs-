#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number --> ");
    scanf("%d",&a);

    switch(a>0)
    {

       case 1:
        printf("The given no is positive !");
        break;

        case 0:
        switch (a<0)

        {
            case 1:
                printf("\nThe given number is negative");
            break;

            case 0:
                printf("\nThe given no is zero");
            break;
        }
    
    }    
           
    return 0;

}