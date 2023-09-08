#include<stdio.h>
int main()
{
    int a[3],b[3],i,co=0,co2=0;
    for (i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for (i=0;i<3;i++)
    {
        if(a[i]<b[i])
        {
            co++;
        }
        if (a[i]>b[i])
        {
            co2++;
        }
    }
    printf("%d %d",co2,co);
}