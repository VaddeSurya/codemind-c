#include<iostream>
using namespace std;
int main()
{
    int i,n,m;
    cin>>n>>m;
    for(i=n;i<=m;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
}