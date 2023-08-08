#include<stdio.h>
int main()
{
    int arr[100],n,i;
    scanf("%d",&n);
    bool is_even=true;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            is_even=false;
            break;
        }
    }
    if(is_even)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}