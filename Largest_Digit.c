#include<stdio.h>
int main()
{
    int n,dig,lag=0;
    scanf("%d",&n);
    while(n>0)
    {
        dig=n%10;
        if(dig>lag)
        {
            lag=dig;
        }
        n/=10;
    }
    printf("%d",lag);
    
}