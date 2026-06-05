/// LCM of two numbers
#include<stdio.h>
void main()
{
    int a,b,i,lcm,greater;

    printf("first number = ");
    scanf("%d",&a);

    printf("second number = ");
    scanf("%d",&b);

    if (a>b)
    {
        greater=a;
    }
    else
    {
        greater=b;
    }

    for(i=greater; i<=(a*b);i++)
    {
        if(i%a==0 && i%b==0 )
        {
            lcm=i;
            break;
        }
        
    }
    printf("lcm = %d ",lcm);
}