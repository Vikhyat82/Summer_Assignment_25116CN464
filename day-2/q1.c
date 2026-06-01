//wap to Find sum of digits of a number
#include<stdio.h>
void main()
{
    int n,rem,sum=0;

    printf("number=");
    scanf("%d",&n);

    while (n!=0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("sum = %d",sum);

}