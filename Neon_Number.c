#include<iostream>
using namespace std;
int main()
{
    int n,sum1=0,dig;
    cin>>n;
    int sq=n*n;
    while(sq>0)
    {
    dig=sq%10;
    sum1+=dig;
    sq/=10;
    }
    if(n==sum1)
    {
        cout<<"Neon Number";
    }
    else
    {
        cout<<"Not Neon Number";
    }
}