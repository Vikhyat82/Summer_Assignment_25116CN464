//wap to Check whether a number is palindrome
#include<stdio.h>
void main()
{
    int n,copy,rem,rev=0;

    printf("number=");
    scanf("%d",&n);

    copy=n;

    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n/=10;
    }

    if (rev==copy)
    {
        printf("number is a palindrome");
    }
    else
    {
        printf("number is not a palindrome");
    }


}