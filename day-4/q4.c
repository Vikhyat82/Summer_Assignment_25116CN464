/// Print Armstrong numbers in a range
#include<math.h>
#include<stdio.h>
void main()
{
    int a,b,i,temp=0,digit=0,rem,sum=0;

    printf("start = ");
    scanf("%d",&a);

    printf("end = ");
    scanf("%d",&b);

    for(i=a;i<=b;i++)
    {
        temp=i;

        while(temp!=0)
        {
            digit+=1;
            temp/=10;
        }
        temp=i;
        while(temp!=0)
        {
            rem=temp%10;
            sum+=(int)(pow(rem,digit)+0.5);
            temp/=10;
        }
        if(sum==i)
        {
            printf("%d , ",i);
        }
        digit=0;
        sum=0;
    }
}