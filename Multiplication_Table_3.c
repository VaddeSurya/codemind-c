#include<stdio.h>
int main()
{
    int i,n,j,r,p;
    scanf("%d%d%d",&n,&j,&r);
    for(i=j;i<=r;i++)
    {
    p=n*i;
    printf("%d x %d = %d
",n,i,p);
    }
    
}