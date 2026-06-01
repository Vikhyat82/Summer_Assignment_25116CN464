//wap to find factorial 
#include<stdio.h>
void main()
{
    int n,i,factorial=1;

    printf("factorial of = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        factorial*=i;
    }

    printf("factorial = %d",factorial);
}