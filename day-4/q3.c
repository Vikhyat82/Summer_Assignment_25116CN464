#include<math.h>
#include<stdio.h>
void main()
{
    int n,temp,digit=0,i,sum=0,rem;

    printf("number = ");
    scanf("%d",&n);

    temp=n;
    while(temp!=0)
    {
        digit+=1;
        temp/=10;
    }
    temp=n;

    for(i=0;i<digit;i++)
    {
        rem=temp%10;
        sum+=(int)(pow(rem,digit)+0.5);
        temp/=10;
    }

    if(n==sum)
    {
        printf("%d is an armstrong number",n);        
    }    
    else
    {
        printf("%d is not an armstrong number",n);        
    }
}