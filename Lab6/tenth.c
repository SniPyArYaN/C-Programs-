#include<stdio.h>
int main()
{
    int rad;
    float per;
    printf("Enter the value for radius --> ");
    scanf("%d",&rad);
    per=2*3.14*rad;
    printf("The perimeter of the given circle is --> %0.2f",per);
    return 0;
    

}