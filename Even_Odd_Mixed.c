#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n) ;
    bool alleven=true;
    bool allodd=true;
    while(n!=0)
    {
        int dig=n%10;
        if(dig%2==0){
            allodd=false;
        }
        else
        {
            alleven=false;
        }
        n/=10;
    }
    if(alleven)
    {
        printf("Even");
    }
    else if(allodd)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}
