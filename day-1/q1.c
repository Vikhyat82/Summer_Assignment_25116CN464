#include <stdio.h>
void main()
{
    int n,i,sum=0;

    printf("enter sum upto=");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
    printf("sum=%d",sum);

}