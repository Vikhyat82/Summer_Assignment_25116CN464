/// Find nth Fibonacci term
#include<stdio.h>
void main()
{
    int a=0,b=1,c,i=0,n;

    printf(" nth term = ");
    scanf("%d",&n);

    while(i<n)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    printf("%dth term = %d ",n,c);

}