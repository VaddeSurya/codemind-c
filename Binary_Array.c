#include<stdio.h>
int main()
{
    int arr[100],i,n;
    scanf("%d",&n);
    bool all_bin=false;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0 || arr[i]==1)
        {
            all_bin=true;
        }
        else{
            all_bin=false;
        }
    }
    if(all_bin)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}