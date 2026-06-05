///Check perfect number
#include<stdio.h>
void main()
{
    int n,i,sum=0,rem,temp;
    printf("number = ");
    scanf("%d",&n);

    temp=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
        else
        {
            continue;
        }
    }
    if(sum==n)
    {
        printf("%d is a perfect number",n);
    }
    else
    {
        printf("%d is not a perfect number",n);
    }

}