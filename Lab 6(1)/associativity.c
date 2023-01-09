#include <stdio.h>
int main()
{
    int a=1,b=2,c=3,d=4;
    printf("%s %d","1*2+3/4 = ",a*b-c/d);
    printf("\n%s %d","1-2+3/4 = ",a-b+c/d);
    printf("\n%s %d","1/2*3-4 = ",a/b*c-d);
    return 0;
}