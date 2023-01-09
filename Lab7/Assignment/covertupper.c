#include <stdio.h>
int main()
{
    char c;
    printf("Enter the alphabet -->");
    scanf("%c",&c);
    if (c>=97 && c<=122)
    {
        c-=32;
    }
    else if (c>=65 && c<=90)
    {
        c=c;
    }
    
    printf("The entered character in lowercase is : %c",c);
}
