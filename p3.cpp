#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int b[m];
        int maxi=INT_MIN;
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            maxi=max(maxi,b[i]);
        }

        int c[n];
        for(int i=0;i<n;i++)
        {
            c[i]=maxi-a[i];
        }
        int mini=min(a[0],c[0]);
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(mini <= min(a[i],c[i]))
            {
                mini=min(a[i],c[i]); count++;
            }
            else if(mini <= max(a[i],c[i]))
            {
                mini=max(a[i],c[i]); count++;
            }
            else{
                break;
            }

        }
        if(count<n) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}