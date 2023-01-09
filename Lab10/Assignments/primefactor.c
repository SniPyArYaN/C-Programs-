#include <stdio.h> 
int main()
{
    int n1,i,p=0,c,j;
    printf ("Enter the desired number : ");
    scanf ("%d", &n1);
    for(i=1;i<=n1;i++)
    {
        if(n1%i==0 || i==1)
        c=i;
        for(j=1;j<=c;j++)
        {
            if(c%j==0 || j==1)
            p++;
        }
        if(p==2)
        printf("%d is a Prime Factor\n",i);
        p=c=0;
    }
    return 0;
}