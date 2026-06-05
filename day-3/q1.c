// wap to Check whether a number is prime
#include<stdio.h>
void main()
{
    int n,i,flag=1;

    printf("number=");
    scanf("%d",&n);

    if (n<=1)
    {
        flag=0;
    }
    else
    {
        for(i=2;i<n;i++)
    {
        if(n%i==0)
        flag=0;
        break;
    }}
 
    if (flag==0)
    {
        printf("%d is not a prime number ",n);
    }
    else
    {
        printf("%d is a prime number",n);
    }
    
}