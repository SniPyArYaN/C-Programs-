#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter number 1 -->");
    scanf("%d",&a);
    printf("Enter number 2 -->");
    scanf("%d",&b);
    switch(a>b)
    {
        case 1:
        printf("Number a is greater");
    break;

        case 0:
            switch (a<b)
            {
                case 1:
                    printf("Number b is greater");
                    break;
            
                case 0:
                    printf("NUmbers are equal");
                    break;
            }
        
        
        
    }

}