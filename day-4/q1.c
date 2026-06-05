/// Generate Fibonacci series
#include<stdio.h>
void main()
{
    int a=0,b=1,c,n,i=0;

    printf("terms = ");
    scanf("%d",&n);

    printf("%d , ",a);

    while(i<=n)
    {
        c=a+b;
        printf("%d , ",c);
        a=b;
        b=c;
        i++;
    }
}