#include<stdio.h>
int main()
{
    int n,dig,sum=0;
    scanf("%d",&n);
    while(sum!=1 && sum!=4)
    {
        sum=0;
        while(n!=0)
        {
            dig=n%10;
            sum+=dig*dig;
            n/=10;
        }
        n=sum;
    }
    if(sum==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}