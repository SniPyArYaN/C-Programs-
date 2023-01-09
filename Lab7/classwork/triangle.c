#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter sides of the triangle --> ");
    scanf("%d %d %d",&s1,&s2,&s3);
    if ((s1+s2>s3))
    {
       if((s1+s3>s2))
       {
            if ((s2+s3>s1))
            {
                printf("The triangle is valid !");
            }
            else 
            {
                printf("The triangle is not valid !");
            }  
       }
       else 
       {
        printf("The triangle is not valid !");
       }
    
    }
    else 
    {
        printf("The triangle is not valid !");
    }
    return 0;
}