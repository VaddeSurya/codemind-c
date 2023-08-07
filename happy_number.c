#include<iostream>
using namespace std;
int main()
{
    int n,sum1=0,dig;
    cin>>n;
    {
        while (n!=1 && n!=4)
        {
            sum1=0;
            while(n!=0)
            {
                dig=n%10;
                sum1+=dig*dig;
                n/=10;
            }
            n=sum1;
        }
        if(n==1)
        {
            cout<<"True";
        }
        else
        {
            cout<<"False";
        }
    }
}