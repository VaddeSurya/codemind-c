#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d%d",&n,&j);
    for(i=1;i<=j;i++)
    printf("%d x %d = %d
",n,i,n*i);
}