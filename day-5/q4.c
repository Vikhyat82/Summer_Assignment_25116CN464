/// Find largest prime factor
#include<stdio.h>
void main()
{
    int n,prmfctr,i;

    printf("number = ");

    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            prmfctr=i;
            n/=i;
        }
    }
    printf("Largest prime factor = %d",prmfctr);

}
