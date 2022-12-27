#include<stdio.h>
int main()
{
    int s,t,b,c,tc;
    scanf("%d%d%d",&s,&t,&b);
    tc=2*s*t*b*512;
    c=(tc)/1024;
    printf("%d KB",c);
}