#include <stdio.h>
int main()
{
    int a,i=1;
    printf("Enter the upper limit of no -->");
    scanf("%d",&a);
    while (a>=i){
        printf("%d \n",i);
        i++;
    }
    return 0;
}