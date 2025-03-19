#include<iostream>
using namespace std;
int main()
{
    long long k,n,w;
    cin>>k>>n>>w;
    long long cost=0;
    for(int i=1;i<=w;i++)
    {
        cost+=(i*k);
    }
    if(n-cost<0) cout<<abs(n-cost)<<endl;
    else cout<<0<<endl;
    
}