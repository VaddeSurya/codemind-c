#include<stdio.h>
int main()
{
    int a,b,i,n,gcb,lcm;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        gcb=i;
    }
    lcm=(a*b)/gcb;
    printf("%d",lcm);
}