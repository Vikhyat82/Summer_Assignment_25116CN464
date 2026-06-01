//wap to Reverse a number
#include<stdio.h>
void main()
{
    int n,rev=0,rem;

    printf("number = ");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n/=10;
    }
    printf("reverse = %d",rev);

}