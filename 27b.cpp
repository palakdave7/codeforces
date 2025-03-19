#include<iostream>
#include<string>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,k;
        cin>>n>>x>>k;
        int curr=x;
        string s;
        cin>>s;
        //string re=s;
        int i=0,z=0,p=0;
        while(k--)
        {
            if(s[i]=='L')
            {
                curr--;
            }
            else
            {
                curr++;
            }
            if(curr==0) 
            {
                i=0;
                z++;
                if(z>1)
                {
                    z+=k/p;
                    break;
                }
            }
            else{
                i++;
            }
            if(z==1)
            {
                p++;
            }
            //i=(i+1)%n;
            if(i==n) break;
        }
        cout<<z<<endl;
    }
}