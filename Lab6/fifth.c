#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Value for a :");
    scanf("%d",&a);
    printf("Enter the Value for b :");
    scanf("%d",&b);
    printf("The value for a initially is %d and the value of b is %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nThe new value for a is : %d and the new value for b is : %d",a,b);
    return 0;

}