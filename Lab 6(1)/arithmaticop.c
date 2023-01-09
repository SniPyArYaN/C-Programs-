#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 4 variables --> ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("\n\n%d",a*b/c+d);
    printf("\n%d",a+b-c*d);
    printf("\n%d",a+b*d-c%a);
    printf("\n%d",a/b*c-d%b);
    return 0;

}