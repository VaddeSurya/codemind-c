#include<iostream>
using namespace std;
int main()
{
    int n,sum1=0,dig;
    scanf("%d",&n);
    int sq=n*n;
    while(sq>0)
    {
    dig=sq%10;
    sum1+=dig;
    sq/=10;
    }
    if(n==sum1)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}