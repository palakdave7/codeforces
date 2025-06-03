#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long minilocal=INT_MAX;
        long long maxilocal=INT_MIN;
        vector<long long>a(n);
        vector<long long>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>maxilocal)
            {
                maxilocal=a[i];
            }
            if(a[i]<minilocal)
            {
                minilocal=a[i];
            }
        }

        long long need=0,count=0,t=0,visi=0,y=0;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]!=-1)
            {
                if(visi>=1)
                {
                    int temp=a[i]+b[i];
                    if(temp!=need) y++;
                }
                need=a[i]+b[i];
                visi++;
            }

            if(b[i]==-1) count++;
        }

        if(y) 
        {
            cout<<0<<endl;
            continue;
        }
        if(count==n)
        {
            cout<<(k+minilocal)-maxilocal+1<<endl;
            continue;
        }
        //cout<<need<<endl;
        for(int i=0;i<n;i++)
        {
            if(b[i]==-1)
            {
                if(need-a[i]>k||need-a[i]<0)
                {
                    t++;
                }
            }
        }
        if(t) cout<<0<<endl;
        else cout<<1<<endl;
    }
    return 0;
}