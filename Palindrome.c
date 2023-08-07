#include<stdio.h>
int main()
{
    int n,rev=0,dig;
    scanf("%d",&n);
    int m=n;
    while(n!=0)
    {
        dig=n%10;
        rev=(rev*10)+dig;
        n/=10;
    }
    if(rev==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}