/// Print factors of a number
#include<stdio.h>
void main()
{
    int n,i;

    printf("number = ");
    scanf("%d",&n);

    printf("Factors = ");

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d , ",i);
        }
    }

}