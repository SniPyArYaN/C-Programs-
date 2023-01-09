#include <stdio.h>
int main()
{
    float phy,chem,bio,maths,comp,sum,avg,per;
    char grade;
    printf("Enter the marks for Physics -->");
    scanf("%f",&phy);
    printf("Enter the marks for Chemistry -->");
    scanf("%f",&chem);
    printf("Enter the marks for Biology -->");
    scanf("%f",&bio);
    printf("Enter the marks for Maths -->");
    scanf("%f",&maths);
    printf("Enter the marks for Computer -->");
    scanf("%f",&comp);
    sum=phy+chem+bio+maths+comp;
    avg=sum/5.0;
    per=(sum/500)*100;
    if (per>=90)
    {
        grade='A';
    }
    else if (per>=80)
    {
        grade='B';
    }
    else if(per>=70)
    {
        grade='C';
    }
    else if(per>=60)
    {
        grade='D';
    }
    else if(per>=40)
    {
        grade='E';
    }
    else 
    {
        grade='F';
    }
    printf("The average marks of the student is --> %0.2f and percentage is --> %0.2f % with Grade %c",avg,per,grade);
    return 0;
}