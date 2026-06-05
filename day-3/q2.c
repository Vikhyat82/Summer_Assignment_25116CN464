///Wap to Print prime numbers in a range
#include<stdio.h>
void main()
{
    int n,a,b,i,j,flag=1;

    printf("starting range = ");
    scanf("%d",&a);

    printf("end of range = ");
    scanf("%d",&b);

    for(i=a;i<=b;i++)
    {
        if(i<=1)
        {
            continue;
        }
        flag=1;
        for (j=2;j<i;j++)
        {
            if (i%j==0)
            {
                flag=0;
                break;

            }
        }    

        if (flag==1)
        {
            printf("%d , ",i);
        }
    }
}
    