//wap to count digits in a number
#include<stdio.h>
void main()
{
    int number,digits=0,i;

    printf("number=");
    scanf("%d",&number);

    if (number==0)
    {
        digits=1;
    }
    else
    {
        while (number!=0)
        {
            number/=10;
            digits+=1;
        }
    }
    printf("number of digits = %d",digits);
}