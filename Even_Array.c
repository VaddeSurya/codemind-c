#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,i;
    cin>>n;
    bool is_even=true;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2!=0)
        {
            is_even=false;
            break;
        }
    }
    if(is_even)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}