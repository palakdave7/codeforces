#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int count=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                count++;
            }
            if(a[i]==0&&i!=0&&i!=n-1)
            {
                flag++;
            }
        }
        if(count==n)
        {
            cout<<0<<endl;
        }
        else if(count==1&&n==2)
        {
            cout<<1<<endl;
        }
        else if(flag==1)
        {
            cout<<1<<endl;
        }
        else if(flag>0)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}