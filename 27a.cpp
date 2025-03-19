#include<iostream>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        if(n==0)
        {
            cout<<1<<endl;
            continue;
        }
        if(n==1)
        {
            cout<<2<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<3<<endl;
            continue;
        }
        int temp=(n/15);
        //cout<<(temp*3)+3<<endl;
        if(n%15==0)
        {
            cout<<(temp*3)+3-2<<endl;
        }
        else if(n%15==1)
        {
            cout<<(temp*3)+3-1<<endl;
        }
        else
        {
            cout<<(temp*3)+3<<endl;
        }
    }
}