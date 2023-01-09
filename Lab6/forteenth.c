#include <stdio.h>
int main()
{
    float a,b,c,d,e,sum,avg,per;
    printf("Enter the Marks for Sub1 --> ");
    scanf("%f",&a);
    printf("Enter the Marks for Sub2 --> ");
    scanf("%f",&b);
    printf("Enter the Marks for Sub3 --> ");
    scanf("%f",&c);
    printf("Enter the Marks for Sub4 --> ");
    scanf("%f",&d);
    printf("Enter the Marks for Sub5 --> ");
    scanf("%f",&e);
    sum=a+b+c+d+e;
    avg=sum/5;
    per=((sum/500)*100);
    printf("The average marks for the student is %0.3f and the percentage is %0.3f %",avg,per);
    return 0;

    



}