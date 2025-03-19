#include<iostream>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int u=0,d=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='-') u++;
            else d++;
        }
        if(u<2||d<1)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<(long long)d*(u/2)*(u-(u/2))<<endl;
    }
}