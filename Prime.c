#include<stdio.h>
int main()
{
    int a,i,sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
    if(a%i==0){
        sum++;
        }
    }
    if(sum==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    
    
}