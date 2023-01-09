#include <stdio.h>
int main()
{
    int num,rev=0,dig=0;
    printf("Enter the number --> ");
    scanf("%d",&num);
    int og=num;
    while (num!=0)
    {
        dig=num%10;
        rev=rev*10+dig;
        num=num/10;

    }
    if (og==rev){
        printf("The number entered is a Palindrome number !");
    }
    else{
        printf("The number is not a Palindrome number !");
    }
    
    return 0;
    

}