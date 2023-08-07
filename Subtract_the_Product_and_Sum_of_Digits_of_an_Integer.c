#include<stdio.h>
int main()
{
    int n,dig,sum=0,pro=1,res;
    scanf("%d",&n);
    while(n>0)
    {
        dig=n%10;
        sum+=dig;
        pro*=dig;
        n/=10;
    }
    res=pro-sum;
    printf("%d",res);
}