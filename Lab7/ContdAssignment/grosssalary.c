#include <stdio.h>
int main()
{
    int salary;
    float hra,da,final_sal;
    printf("Enter the Salary --> ");
    scanf("%d",&salary);
    if (salary<=10000)
    {
        hra=0.2*salary;
        da=0.8*salary;
        final_sal=salary+hra+da;
    }
    else if (salary >10000 && salary<=20000)
    {
        hra=0.25*salary;
        da=0.9*salary;
        final_sal=salary+hra+da;
    }
    else if (salary>20000)
    {
        hra=0.3*salary;
        da=0.95*salary;
        final_sal=salary+hra+da;
    }
    else{
        printf("Invalid Entry");
    }
    printf("The gross salary of the employee is %0.2f",final_sal);
    return 0;
}