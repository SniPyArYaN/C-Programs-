#include <stdio.h>
int main()
{
    int new_amt,amt,n5,n2,n1,n50,n20,n10,n05,c2,c1;
    printf("Enter the amount :");
    scanf("%d", &amt);
    new_amt=amt;
    n5=new_amt/500;
    new_amt=new_amt-(n5*500);
    n2=new_amt/200;
    new_amt=new_amt-(n2*200);
    n1=new_amt/100;
    new_amt=new_amt-(n1*100);
    n50=new_amt/50;
    new_amt=new_amt-(n50*50);
    n20=new_amt/20;
    new_amt=new_amt-(n20*20);
    n10=new_amt/10;
    new_amt=new_amt-(n10*10);
    n05=new_amt/5;
    new_amt=new_amt-(n05*5);
    c2=new_amt/2;
    new_amt=new_amt-(c2*2);
    c1=new_amt;
    printf("The given currency can be as : \n%d 500 Rupee Notes = %d \n%d 200 Rupee Notes = %d \n%d 100 Rupee Notes = %d \n%d 50 Rupee Notes = %d \n%d 20 Rupee Notes = %d \n%d 10 Rupee Notes = %d \n%d 5 Rupee Notes/Coins = %d \n%d 2 Rupee Coins = %d \n%d 1 Rupee Coins = %d",n5,n5*500,n2,n2*200,n1,n1*100,n50,n50*50,n20,n20*20,n10,n10*10,n05,n05*5,c2,c2*2,c1,c1);
    return 0;
}