#include<stdio.h>
int main()
{
    int arr[100],i,n,sum = 0,aver,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    aver=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=aver)
        {
            count+=1;
        }
    }
    printf("%d",count);
}