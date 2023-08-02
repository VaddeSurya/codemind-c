#include<stdio.h>
int main()
{
    int n,digit,large=0;
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        if(digit>large)
        {
            large=digit;
        }
        n=n/10;
    }
    printf("%d",large);
}