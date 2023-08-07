#include<stdio.h>
#include <stdbool.h>
#include<stdlib.h>
int main()
{
    int n,rev=0,dig;
    scanf("%d",&n);
    bool revneg=false;
    if(n<0)
    {
        revneg=true;
    }
    n=abs(n);
    while(n!=0)
    {
        dig=n%10;
        rev=(rev*10)+dig;
        n/=10;
    }
    if(revneg)
    {
        rev=-rev;
    }
    printf("%d",rev);
}