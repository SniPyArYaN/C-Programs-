#include <stdio.h>
int main()
{
    char alpha,lower;
    int ascii;
    printf("Enter the Character-->");
    scanf("%c",&alpha);
    ascii=(int)alpha;
    printf("The ASCII value for the entered keyword is : %d \n",ascii);
    if ((alpha>=32 && alpha<=47) || (alpha>57 && alpha<=64) || (alpha>90 && alpha<=96) || (alpha>122 && alpha<=126))
    {
        printf("The Entered keyword is a special character");
    }
    else if (alpha>47 && alpha<=57)
    {
        printf("The entered keyword is a number");
    }
    else if(alpha >=65 && alpha <=90)
    {
        printf("The Entered keyword is a uppercase alphabet");
    }
    else 
    {
        printf("THe Entered keyword is a lowercase alphabet");
    }
    return 0;
}