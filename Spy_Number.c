#include<stdio.h>
int main()
{
    int n,i,sum=0,pro=1,dig;
    scanf("%d",&n);
    while(n>0)
    {
        dig=n%10;
        sum+=dig;
        pro*=dig;
        n/=10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}