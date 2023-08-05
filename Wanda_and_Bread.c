#include<stdio.h>
int main()
{
    int n,k,m,tot;
    scanf("%d %d %d",&n,&k,&m);
    tot=(n+k-1)/k;
    if(tot<=m)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}