#include<stdio.h>
int main()
{
    int n,dig,rev=0;
    scanf("%d",&n);
    while(n>0)
    {
        dig=n%10;
        rev=(rev*10)+dig;
        n/=10;
    }
    printf("%d",rev);
}