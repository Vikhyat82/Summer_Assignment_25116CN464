///Check strong number
#include<stdio.h>
void main()
{
    int n,temp,rem,sum=0,fact=1,j;

    printf("enter number = ");
    scanf("%d",&n);

    temp=n;

    while(n!=0)
    {
        rem=n%10;
        for(j=1;j<=rem;j++)
        {
            fact*=j;
        }
        sum+=fact;
        fact=1;
        n/=10;
    }
    if (sum==temp)
    {
        printf("%d is a strong number",temp);
    }
    else 
    {
        printf("%d is not a strong number",temp);
    }
}    