//wap to Find product of digits
#include<stdio.h>
void main()
{
    int n,product=1,rem;

    printf("number=");
    scanf("%d",&n);

    while (n!=0)
    {
        rem=n%10;
        product*=rem;
        n/=10;
    }
    printf("product of digits = %d",product);
}