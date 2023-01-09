#include <stdio.h>
#define BASIC 1500
#define BONUS 200
#define commission 0.02
int main()
{
    int numbers;
    float money,salary,totalbonus,totalcommission;
    printf("number of computer sold and total money \n");
    scanf("%d %f",&numbers,&money);
    totalbonus=numbers*BONUS;
    totalcommission=commission*money;
    salary=BASIC+totalbonus+totalcommission;
    printf("\nTotal bonus=%0.2f \nTotal Commission=%0.2f",totalbonus,totalcommission);
    printf("\nTotal Salary = %0.2f",salary);
}