#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d;
    float root1,root2;
    printf("Enter the quadratic equation in the form of coeff a,b,c-->");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b) - (4*a*c);
    switch (d>0)
    {
    case 1:
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("The roots of the equation are --> %0.2f & %0.2f",root1,root2);
        break;
    
    case 0:
        switch(d<0)
        {
            case 1:
            printf("The equation has complex roots");
            break;

            case 0:
            root1=(-c)/(2*a);
            root2=root1;
            printf("The roots are %0.2f",root1);
            break;

        }

    
    }


}