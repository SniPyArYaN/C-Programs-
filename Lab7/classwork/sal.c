#include <stdio.h>
#include <string.h>
int main()
{
    float salary, bonus,extra;
    char gender;
    printf("Enter Gender --> \n");
    scanf("%c", &gender);
    printf("Enter the salary=\n");
    scanf("%f", &salary);

    if (gender=='m' || gender=='M')
    {
       if (salary>10000)
       {
        bonus=salary*0.05;
       }
       
       else
       {
        extra=salary*0.02;
        bonus=extra*0.05;
       }
       
    }
    if (gender=='f' || gender=='F')
    {
      if(salary>10000)
      {
        bonus=salary*0.01;
      }
      
      else
      {
        extra=salary*0.02;
        bonus=extra*0.05;
      }
      
    }
    salary+=bonus;
    printf("Bonus=%.2f salary=%.2f", bonus, salary);
    
    return 0;
}