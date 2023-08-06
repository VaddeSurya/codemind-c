#include<stdio.h>
int main()
{
    int n,m,hcf,temp;
    scanf("%d %d",&n,&m);
    while(m!=0)
    {
    temp=m;
    m=n%m;
    n=temp;
    }
    hcf=n;
    printf("%d",hcf);
}